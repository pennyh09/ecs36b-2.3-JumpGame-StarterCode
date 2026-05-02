#include "JumpGame.h"
#include <vector>
#include <string>
#include <iostream>
#include <queue>


void helper( std::vector<int> userEnter) {

    std::queue<int> temp;
    std::vector<bool> visit(userEnter.size(), false);
    std::vector<int> parent(userEnter.size(), -1);

    visit[0] = true;
    temp.push(0);

    while (!temp.empty()) {
        int current = temp.front();
        temp.pop();

        if (current == (int)userEnter.size() - 1) {
            std::vector<int> path;

            while (current != -1) {
                path.push_back(current);
                current = parent[current];
            }

            std::reverse(path.begin(), path.end());

            for (int i =0 ; i <(int)path.size(); i++) {
                std::cout << path[i];
                if (i < (int)path.size() - 1) std::cout << ", ";
            }
            std::cout << std::endl;
            return;
        }

        int moveRight = current + userEnter[current];
        int moveleft  = current - userEnter[current];



        if ( moveRight >= 0 && visit[moveRight] == false && moveRight < (int)userEnter.size()) {
            visit[moveRight] = true;
            parent[moveRight] = current;
            temp.push(moveRight);
        }

        if ( moveleft >= 0 && visit[moveleft] == false && moveleft < (int)userEnter.size()) {
            visit[moveleft] = true;
            parent[moveleft] = current;
            temp.push(moveleft);
        }
    }
    std::cout << "There is no solution to the given game." << std::endl;
}


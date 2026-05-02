#include "JumpGame.h"
#include <iostream>
#include <vector>

int main(int argc, char** argv) {

    std::vector<int> input;


    for (int i = 1; i < argc; i++) {
        input.push_back(std::stoi(argv[i]));
    }


    helper(input);

    if (input.empty()) {
        return 0;
    }


    return 0;





}

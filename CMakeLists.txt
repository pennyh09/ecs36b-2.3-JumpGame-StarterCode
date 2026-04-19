cmake_minimum_required(VERSION 3.28)
project(JumpGame)

set(CMAKE_CXX_STANDARD 23)
set(CXX_WARNINGS -Wall -Werror -Wextra)

set(SRC_LIB_NAME JumpGameLib)
set(EXE_NAME JumpGameExe)
set(TESTING_NAME JumpGameTests)

add_subdirectory(src)
add_subdirectory(testing)

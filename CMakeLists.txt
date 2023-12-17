cmake_minimum_required(VERSION 3.10)

project(problem_sets)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_TRY_COMPILE_CONFIGURATION "-D_ADI_COMPILER;__VERSIONNUM__")

add_executable(BlackSquare BlackSquare.cpp)
add_executable(Divisions Divisions.cpp)
add_executable(Lucky Lucky.cpp)
add_executable(YesOrYes YesOrYes.cpp)
add_executable(hello hello.cpp)

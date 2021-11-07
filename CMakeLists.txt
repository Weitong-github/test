cmake_minimum_required(VERSION 3.0)

project(solider)

include_directories(./include)

add_executable(solider 
        main.cpp 
        src/solider.cpp 
        src/gun.cpp
)
cmake_minimum_required(VERSION 3.10)
project(MyApp)
add_executable(my_app Test.cpp)
target_include_directories(my_app PUBLIC include) 

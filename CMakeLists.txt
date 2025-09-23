cmake_minimum_required(VERSION 4.1.1)
project(PIONEER)
aux_source_directory(. SRC_LIST)
include_directories(include)
add_executable(Robot SRC_LIST)



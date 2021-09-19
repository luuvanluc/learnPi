cmake_minimum_required(VERSION 2.8.9)
project(hinhChuNhat)

include_directories(.)

file(GLOB SOURCES "*.cpp" "*/*.cpp")

add_executable(hinhChuNhat ${SOURCES})

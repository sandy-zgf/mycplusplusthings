cmake_minimum_required(VERSION 3.10)

project(MAIN)

aux_source_directory(./src DIRSRC)

include_directories(./include)

add_executable(MAIN ${DIRSRC})
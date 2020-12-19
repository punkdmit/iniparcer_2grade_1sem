cmake_minimum_required(VERSION 3.15)
project(untitled31)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled31 source.cpp INIFileBuilder.cpp INIFileBuilder.h INIParser.cpp INIParser.h MyException.cpp MyException.h ParsedINIFile.cpp ParsedINIFile.h)
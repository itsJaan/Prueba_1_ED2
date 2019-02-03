cmake_minimum_required(VERSION 3.10)
project(Prueba_Parcial_I)

set(CMAKE_CXX_STANDARD 11)

add_executable(Prueba_Parcial_I main.cpp DataFile.cpp DataFile.h FixedSize_Register.cpp FixedSize_Register.h KnownVarSize_Register.cpp KnownVarSize_Register.h DelimiterVarSize_Register.cpp DelimiterVarSize_Register.h)

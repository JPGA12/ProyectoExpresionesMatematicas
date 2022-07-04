cmake_minimum_required(VERSION 3.22)
project(ProyectoExpresionesMatematicas)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProyectoExpresionesMatematicas main.cpp Postfix.cpp Postfix.h Tail.cpp Tail.h Utilities.cpp Utilities.h Stack.cpp Stack.h StackFloat.cpp StackFloat.h)

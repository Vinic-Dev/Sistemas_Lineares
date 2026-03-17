cmake_minimum_required(VERSION 4.1)
project(algortimro C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(algortimro
        lista.c
        lista.h
        main.c
        sistema_linear.c
        sistema_linear.h
)

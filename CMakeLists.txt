cmake_minimum_required(VERSION 3.27)
project(password_manager)

set(CMAKE_CXX_STANDARD 17)

add_executable(password_manager main.cpp
        Menu.cpp
        Menu.h
        Action.cpp
        Action.h
        GeneratePasswordAction.cpp
        GeneratePasswordAction.h
        ExitAction.cpp
        ExitAction.h
        ListPasswordAction.cpp
        ListPasswordAction.h
        ItemStorage.cpp
        ItemStorage.h
)

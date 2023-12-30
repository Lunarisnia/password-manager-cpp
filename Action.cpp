//
// Created by Loona on 29/12/2023.
//

#include <iostream>
#include "Action.h"

Action::~Action() {
    std::cout << "Destroyed" << std::endl;
}

void Action::Execute() {
    std::cout << "Unimplemented" << std::endl;
}

std::string Action::Ping() {
    return "Pong";
}
//
// Created by Loona on 30/12/2023.
//

#include <iostream>
#include "ExitAction.h"

ExitAction::ExitAction(const std::string &actionName) {
    ActionName = actionName;
}

void ExitAction::Execute() {
    std::cout << "Exiting..." << std::endl;
    exit(0);
}
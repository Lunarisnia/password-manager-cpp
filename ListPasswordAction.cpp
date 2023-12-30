//
// Created by Loona on 30/12/2023.
//

#include <iostream>
#include "ListPasswordAction.h"
#include "ItemStorage.h"

ListPasswordAction::ListPasswordAction(const std::string &actionName, ItemStorage<std::string> *PasswordStorage) {
    ActionName = actionName;
    storage = PasswordStorage;
}

void ListPasswordAction::Execute() {
    std::cout << "List of your stored passwords:" << std::endl;
    storage->ListAllItem();
    std::cout << std::endl;
}
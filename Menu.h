//
// Created by Loona on 29/12/2023.
//

#ifndef PASSWORD_MANAGER_MENU_H
#define PASSWORD_MANAGER_MENU_H


#include <unordered_map>
#include <string>
#include "Action.h"

class Menu {
    std::unordered_map<std::string, Action*> menus;

public:
    explicit Menu(const std::unordered_map<std::string, Action*> &menuList);

    void listMenu();
};


#endif //PASSWORD_MANAGER_MENU_H

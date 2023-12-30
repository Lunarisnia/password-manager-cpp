//
// Created by Loona on 29/12/2023.
//

#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include "Menu.h"


Menu::Menu(const std::unordered_map<std::string, Action *> &menuList) : menus(menuList) {
    std::cout << "Menu Initialized" << std::endl;
}


void Menu::listMenu() {
    int i = 0;
    std::vector<std::string> options;
    std::vector<std::string> keys;
    for (const std::pair<const std::string, Action *> &menu: menus) {
        std::ostringstream option;
        option << i + 1 << ". " << menu.second->ActionName << std::endl;
        options.push_back(option.str());
        keys.push_back(menu.first);
        i++;
    }

    while (true) {
        for (const std::string &option : options) {
            std::cout << option;
        }
        std::cin.clear();

        int choice = -1;
        std::cout << "What do you want to do: ";
        std::cin >> choice;

        // Just let non integer input go away
        if (std::cin.fail()) {
            std::cout << "CIN FAIL" << std::endl;
            break;
        }

        if ((choice <= 0) || (choice > menus.size())) {
            std::cout << "Invalid choice" << std::endl;
            continue;
        }

        if (menus[keys[choice - 1]] != nullptr) {
            menus[keys[choice - 1]]->Execute();
        }
    }
}
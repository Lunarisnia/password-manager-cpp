#include <iostream>
#include <string>
#include <unordered_map>
#include "Menu.h"
#include "Action.h"
#include "GeneratePasswordAction.h"
#include "ExitAction.h"
#include "ListPasswordAction.h"
#include "ItemStorage.h"

int main() {
    ItemStorage<std::string>* PasswordStorage = new ItemStorage<std::string>();

    std::unordered_map<std::string, Action *> menuList;
    menuList["Exit"] = new ExitAction("Exit");
    menuList["ListPassword"] = new ListPasswordAction("List Password", PasswordStorage);
    menuList["GeneratePassword"] = new GeneratePasswordAction("Generate Password", PasswordStorage);

    Menu *newMenu = new Menu(menuList);
    newMenu->listMenu();
    delete newMenu;
    delete PasswordStorage;

    for (const std::pair<std::string, Action*> menu : menuList) {
        delete menu.second;
    }
    return 0;
}

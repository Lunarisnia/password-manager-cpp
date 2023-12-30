//
// Created by Loona on 29/12/2023.
//

#include <iostream>
#include <string>
#include <random>
#include "GeneratePasswordAction.h"

GeneratePasswordAction::GeneratePasswordAction(const std::string &actionName,
                                               ItemStorage<std::string> *PasswordStorage) {
    ActionName = actionName;
    storage = PasswordStorage;
}

std::string GeneratePasswordAction::GeneratePassword(const int &characterLength) {
    std::string availableKeys = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890-=!@#$%^&*()_+[]{};:',<>./?";
    std::random_device randomDevice;
    std::mt19937 mt(randomDevice());
    std::uniform_int_distribution<int> dist(0, static_cast<int>(availableKeys.length()) - 1);

    if (characterLength <= 0) {
        std::cout << "characterLength has to be > 0" << std::endl;
    }

    std::string generated;
    for (int i = 0; i < characterLength; i++) {
        generated += availableKeys[dist(mt)];
    }
    return generated;
}

void GeneratePasswordAction::Execute() {
    int passwordLength = 0;
    std::string passwordKey;
    do {
        std::cout << "Enter your password length: ";
        std::cin >> passwordLength;

        if (std::cin.fail()) {
            std::cout << "CIN Fail" << std::endl;
            exit(1);
        }

        std::cout << "Enter your password key: ";
        std::cin >> passwordKey;

        if (std::cin.fail()) {
            std::cout << "password key CIN fail" << std::endl;
            exit(1);
        }

        if (passwordLength <= 0) {
            std::cout << "Password Length has to be at least 1" << std::endl;
        }
    } while (passwordLength <= 0);

    std::string generatedPassword = GeneratePassword(passwordLength);
    std::cout << generatedPassword << std::endl;
    storage->StoreItem(passwordKey, generatedPassword);
}
//
// Created by Loona on 29/12/2023.
//

#ifndef PASSWORD_MANAGER_GENERATEPASSWORDACTION_H
#define PASSWORD_MANAGER_GENERATEPASSWORDACTION_H

#include <string>
#include "Action.h"
#include "ItemStorage.h"

class GeneratePasswordAction : public Action {
public:
    explicit GeneratePasswordAction(const std::string &actionName, ItemStorage<std::string> *PasswordStorage);

    void Execute() override;
private:
    ItemStorage<std::string> *storage;
    static std::string GeneratePassword(const int &characterLength);
};


#endif //PASSWORD_MANAGER_GENERATEPASSWORDACTION_H

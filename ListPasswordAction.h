//
// Created by Loona on 30/12/2023.
//

#ifndef PASSWORD_MANAGER_LISTPASSWORDACTION_H
#define PASSWORD_MANAGER_LISTPASSWORDACTION_H

#include "Action.h"
#include "ItemStorage.h"

class ListPasswordAction : public Action {
    ItemStorage<std::string> *storage;
public:
    explicit ListPasswordAction(const std::string &actionName, ItemStorage<std::string> *PasswordStorage);

    void Execute() override;
};


#endif //PASSWORD_MANAGER_LISTPASSWORDACTION_H

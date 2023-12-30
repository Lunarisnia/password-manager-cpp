//
// Created by Loona on 30/12/2023.
//

#ifndef PASSWORD_MANAGER_EXITACTION_H
#define PASSWORD_MANAGER_EXITACTION_H

#include <string>
#include "Action.h"

class ExitAction : public Action {
public:
    explicit ExitAction(const std::string &actionName);

    void Execute() override;
};


#endif //PASSWORD_MANAGER_EXITACTION_H

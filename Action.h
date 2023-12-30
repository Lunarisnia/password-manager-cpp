//
// Created by Loona on 29/12/2023.
//

#ifndef PASSWORD_MANAGER_ACTION_H
#define PASSWORD_MANAGER_ACTION_H

#include <string>

class Action {
public:
    ~Action();

    std::string ActionName;

    virtual void Execute();

    std::string Ping();
};


#endif //PASSWORD_MANAGER_ACTION_H

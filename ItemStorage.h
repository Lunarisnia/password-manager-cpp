//
// Created by Loona on 30/12/2023.
//

#ifndef PASSWORD_MANAGER_ITEMSTORAGE_H
#define PASSWORD_MANAGER_ITEMSTORAGE_H

#include <unordered_map>
#include <vector>
#include <string>

template<typename T>
class ItemStorage {
public:
    std::unordered_map<std::string, T> Locker;

    virtual void StoreItem(const std::string &ItemKey, T Item);

    virtual T GetItem(const std::string &ItemKey);

    virtual void ListAllItem();
};


#endif //PASSWORD_MANAGER_ITEMSTORAGE_H

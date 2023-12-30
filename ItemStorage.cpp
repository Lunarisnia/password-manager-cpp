//
// Created by Loona on 30/12/2023.
//

#include <iostream>
#include "ItemStorage.h"

template class ItemStorage<std::string>;

template<typename T>
void ItemStorage<T>::StoreItem(const std::string &ItemKey, T Item) {
    Locker[ItemKey] = Item;
}

template<typename T>
T ItemStorage<T>::GetItem(const std::string &ItemKey) {
    return Locker[ItemKey];
}

template<typename T>
void ItemStorage<T>::ListAllItem() {
    for (const std::pair<std::string, T> item : Locker) {
        std::cout << item.first << " : " << item.second << std::endl;
    }
}
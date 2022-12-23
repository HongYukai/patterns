//
// Created by 12096 on 2022/12/23.
//

#include "single.h"

//! LAZY_MODE_1
//Singleton::Singleton* singleton = nullptr;

//! HUBGRY_MODE
Singleton Singleton::singleton;

Singleton *Singleton::getInstance() {
    //! LAZY_MODE_1
//    if (mutex == nullptr) {
//        std::unique_lock<std::mutex> lock(mutex);
//        if (mutex == nullptr) {
//            singleton = new Singleton();
//        }
//    }
//    return singleton;

    //! LAZY_MODE_2
//    static Singleton singleton;
//    return &singleton;

    //! HUNGRY_MODE
    return &singleton;
}
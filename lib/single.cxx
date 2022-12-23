//
// Created by 12096 on 2022/12/23.
//

#include "single.h"

//! LAZY_MODE
//Singleton::Singleton* singleton = nullptr;

Singleton *Singleton::getInstance() {
    //! mutable 2
//    static Singleton singleton;

    //! LAZY_MODE
//    if (mutex == nullptr) {
//        std::unique_lock<std::mutex> lock(mutex);
//        if (mutex == nullptr) {
//            singleton = new Singleton();
//        }
//    }
//    return singleton;


    return &singleton;
}
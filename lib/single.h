//
// Created by 12096 on 2022/12/23.
//
#include <mutex>

#ifndef PATTERNS_SINGLE_H
#define PATTERNS_SINGLE_H

//! HUNGRY_MODE is definitely thread safe, but LAZY_MODE_1 is thread unsafe

//! HUNGRY_MODE, avoid the thread safety problem compared to LAZY_MODE
class Singleton {
private:
    Singleton() {}
    //! LAZY_MODE_1
//    static Singleton *singleton;
//    static volatile std::mutex mutex;
    //! HUNGRY_MODE
    static Singleton singleton;
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static Singleton* getInstance();
    void hello() {
        printf("I am a singleton instance\n");
    }
};

#endif //PATTERNS_SINGLE_H

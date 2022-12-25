//
// Created by 12096 on 2022/12/25.
//

#ifndef PATTERNS_PROTOTYPE_H
#define PATTERNS_PROTOTYPE_H

//! use prototype instead of factory mode to optimize complex object creation

#include <memory>

class Car {
public:
    virtual ~Car() {}
    virtual std::shared_ptr<Car> clone() = 0;
    virtual void hello() = 0;
};

class Benz : public Car {
public:
    std::shared_ptr<Car> clone() override {
        return std::make_shared<Benz>(*this);
    }
    void hello() override {
        printf("I am Benz!\n");
    }
};

class Panamera : public Car {
public:
    std::shared_ptr<Car> clone() override {
        return std::make_shared<Panamera>(*this);
    }
    void hello() override {
        printf("I am Panamera!\n");
    }
};

#endif //PATTERNS_PROTOTYPE_H

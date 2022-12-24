//
// Created by 12096 on 2022/12/23.
//

#ifndef PATTERNS_FACTORY_METHOD_H
#define PATTERNS_FACTORY_METHOD_H

#include <memory>

//! Abstract base class
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

//! Concrete class
class Rect : public Shape {
public:
    virtual void draw() {
        std::cout << "Draw a rectangle" << std::endl;
    }
};

//! Concrete class
class Line : public Shape {
public:
    virtual void draw() {
        std::cout << "Draw a line" << std::endl;
    }
};

//! Abstract base class
class Delivery {
public:
    virtual void deliver() = 0;
    virtual ~Delivery() {}
};

//! Concrete class
class RectDelivery : public Delivery{
public:
    virtual void deliver() {
        std::cout << "Delivering rectangles..." << std::endl;
    }
};

//! Concrete class
class LineDelivery : public Delivery{
public:
    virtual void deliver() {
        std::cout << "Delivering lines..." << std::endl;
    }
};

//! Base factory class(ISD means Interface-Shape-Delivery)
class ISDFactory {
public:
    virtual std::shared_ptr<Shape> GetShape() = 0;
    virtual std::shared_ptr<Delivery> GetDelivery() = 0;
    virtual ~ISDFactory() {}
};

//! Concrete factory class
class RSDFactory : public ISDFactory {
public:
    virtual std::shared_ptr<Shape> GetShape() {
        return std::make_shared<Rect>();
    }
    virtual std::shared_ptr<Delivery> GetDelivery() {
        return std::make_shared<RectDelivery>();
    }
};

//! Concrete factory class
class LSDFactory : public ISDFactory {
public:
    virtual std::shared_ptr<Shape> GetShape() {
        return std::make_shared<Line>();
    }
    virtual std::shared_ptr<Delivery> GetDelivery() {
        return std::make_shared<LineDelivery>();
    }
};

#endif //PATTERNS_FACTORY_METHOD_H

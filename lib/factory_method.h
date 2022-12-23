//
// Created by 12096 on 2022/12/23.
//

#ifndef PATTERNS_FACTORY_METHOD_H
#define PATTERNS_FACTORY_METHOD_H

#include <memory>

//! abstract base class
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

//! concrete class
class Rect : public Shape {
public:
    virtual void draw() {
        std::cout << "Draw a rectangle" << std::endl;
    }
};

//! concrete class
class Line : public Shape {
public:
    virtual void draw() {
        std::cout << "Draw a line" << std::endl;
    }
};

//! base factory class
class ShapeFactory {
public:
    virtual std::shared_ptr<Shape> GetShape() = 0;
    virtual ~ShapeFactory() {}
};

//! concrete factory class
class RectFactory : public ShapeFactory {
public:
    virtual std::shared_ptr<Shape> GetShape() {
        return std::make_shared<Rect>();
    }
};

//! concrete factory class
class LineFactory : public ShapeFactory {
public:
    virtual std::shared_ptr<Shape> GetShape() {
        return std::make_shared<Line>();
    }
};

#endif //PATTERNS_FACTORY_METHOD_H

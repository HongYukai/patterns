#include <iostream>
#include "lib/single.h"
#include "lib/factory_method.h"

using namespace std;

//! utilize class
class FactoryTest {
    std::shared_ptr<ShapeFactory> shapeFactory_;
public:
    FactoryTest(std::shared_ptr<ShapeFactory> shapeFactory) : shapeFactory_(shapeFactory){}
    void setFactory(std::shared_ptr<ShapeFactory> shapeFactory) {
        this->shapeFactory_ = shapeFactory;
    }
    void test1() {
        auto shape = shapeFactory_->GetShape();
        shape->draw();
    }
    void test2() {
        auto shape = shapeFactory_->GetShape();
        shape->draw();
    }
    void test3() {
        auto shape = shapeFactory_->GetShape();
        shape->draw();
    }
};

int main() {
//    cout << Singleton::getInstance() << endl;
//    cout << Singleton::getInstance() << endl;
    FactoryTest factoryTest(make_shared<RectFactory>());
    factoryTest.test1();
    factoryTest.test2();
    factoryTest.test3();
    factoryTest.setFactory(make_shared<LineFactory>());
    factoryTest.test1();
    factoryTest.test2();
    factoryTest.test3();
    return 0;
}

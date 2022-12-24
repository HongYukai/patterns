#include <iostream>
#include "lib/single.h"
#include "lib/factory.h"

using namespace std;

//! utilize class
class FactoryTest {
    std::shared_ptr<ISDFactory> isdFactory_;
public:
    FactoryTest(std::shared_ptr<ISDFactory> isdFactory) : isdFactory_(isdFactory){}
    void setFactory(std::shared_ptr<ISDFactory> isdFactory) {
        this->isdFactory_ = isdFactory;
    }
    void test1() {
        auto shape = isdFactory_->GetShape();
        auto delivery = isdFactory_->GetDelivery();
        shape->draw();
        delivery->deliver();
    }
    void test2() {
        auto shape = isdFactory_->GetShape();
        auto delivery = isdFactory_->GetDelivery();
        shape->draw();
        delivery->deliver();
    }
    void test3() {
        auto shape = isdFactory_->GetShape();
        auto delivery = isdFactory_->GetDelivery();
        shape->draw();
        delivery->deliver();
    }
};

int main() {
//    cout << Singleton::getInstance() << endl;
//    cout << Singleton::getInstance() << endl;
    FactoryTest factoryTest(make_shared<RSDFactory>());
    factoryTest.test1();
    factoryTest.test2();
    factoryTest.test3();
    factoryTest.setFactory(make_shared<LSDFactory>());
    factoryTest.test1();
    factoryTest.test2();
    factoryTest.test3();
    return 0;
}

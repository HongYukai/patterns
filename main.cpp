#include <iostream>
#include "lib/single.h"
#include "lib/factory.h"
#include "lib/prototype.h"
#include "lib/builder.h"
#include "lib/flyweight.h"
#include "lib/strategy.h"
#include "lib/observer.h"

using namespace std;

int main() {
//    cout << Singleton::getInstance() << endl;
//    cout << Singleton::getInstance() << endl;
//    FactoryTest factoryTest(make_shared<RSDFactory>());
//    factoryTest.test1();
//    factoryTest.test2();
//    factoryTest.test3();
//    factoryTest.setFactory(make_shared<LSDFactory>());
//    factoryTest.test1();
//    factoryTest.test2();
//    factoryTest.test3();
//    PrototypeTest prototypeTest(make_shared<Benz>());
//    prototypeTest.test();
//    prototypeTest.setCar(make_shared<Panamera>());
//    prototypeTest.test();
//    House *house = new StoneHouse();
//    house->init();
//    delete house;
//    house = new CrystalHouse();
//    house->init();
//    delete house;
//    const Font* font1 = FontFactory::GetFont("dni");
//    font1->hello();
//    const Font* font2 = FontFactory::GetFont("dni");
//    font2->hello();
//    TaxExecutor taxExecutor(make_shared<CNStrategyFactory>());
//    cout << taxExecutor.execute() << endl;
//    taxExecutor.setStrategy(make_shared<UKStrategyFactory>());
//    cout << taxExecutor.execute() << endl;
    Auction auction;
    auction.attach(make_shared<AuctioneerX>());
    auction.attach(make_shared<AuctioneerY>());
    auction.attach(make_shared<AuctioneerZ>());
    auction.SetState(3);
    auction.NotifyAll();
    auction.SetState(8);
    auction.NotifyAll();
    auction.SetState(15);
    auction.NotifyAll();
    return 0;
}

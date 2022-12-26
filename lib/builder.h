//
// Created by 12096 on 2022/12/26.
//

#ifndef PATTERNS_BUILDER_H
#define PATTERNS_BUILDER_H

class House {
public:
    virtual ~House() {}
    void init() {
        this->buildCeilings();
        this->buildDoors();
        this->buildWalls();
        this->buildWindows();
        this->buildComplete();
    }
private:
    virtual void buildCeilings() = 0;
    virtual void buildWalls() = 0;
    virtual void buildDoors() = 0;
    virtual void buildWindows() = 0;
    virtual void buildComplete() = 0;
};

class StoneHouse : public House{
private:
    void buildCeilings() override {
        printf("Building stone ceilings...\n");
    }
    void buildWalls() override {
        printf("Building stone walls...\n");
    }
    void buildDoors() override {
        printf("Building stone doors...\n");
    }
    void buildWindows() override {
        printf("Building stone windows...\n");
    }
    void buildComplete() override {
        printf("Stone house is built...\n");
    }
};

class CrystalHouse : public House{
private:
    void buildCeilings() override {
        printf("Building crystal ceilings...\n");
    }
    void buildWalls() override {
        printf("Building crystal walls...\n");
    }
    void buildDoors() override {
        printf("Building crystal doors...\n");
    }
    void buildWindows() override {
        printf("Building crystal windows...\n");
    }
    void buildComplete() override {
        printf("Crystal house is built...\n");
    }
};

#endif //PATTERNS_BUILDER_H

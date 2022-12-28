//
// Created by 12096 on 2022/12/26.
//

#ifndef PATTERNS_BUILDER_H
#define PATTERNS_BUILDER_H

//! same as template method

class House {
public:
    virtual ~House() {}
    //! The base class fix the composition (stable) of virtual methods or non-virtual methods,
    //! subclass will inherit this composition and override above virtual methods (volatile)
    virtual void init() final {
        this->BuildStarted();
        this->buildCeilings();
        this->buildDoors();
        this->buildWalls();
        this->buildWindows();
        this->buildComplete();
    }
    //! non-virtual methods prefer to be set to protected to be called by subclass and avoid being
    //! called by others alone. virtual method can be protected or private.
protected:
    void BuildStarted() {
        printf("Guess what is building now...\n");
    }
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
        printf("Stone house is built\n");
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
        printf("Crystal house is built\n");
    }
};

#endif //PATTERNS_BUILDER_H

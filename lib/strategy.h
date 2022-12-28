//
// Created by 12096 on 2022/12/29.
//

#ifndef PATTERNS_STRATEGY_H
#define PATTERNS_STRATEGY_H

#include <memory>

class Strategy {
public:
    virtual double calculate() = 0;
    virtual ~Strategy() {}
};

class CNStrategy : public Strategy {
public:
    double calculate() override {
        return 50.0;
    }
};

class HKStrategy : public Strategy {
public:
    double calculate() override {
        return 15.0;
    }
};

class UKStrategy : public Strategy {
public:
    double calculate() override {
        return 10.0;
    }
};

class StrategyFactory {
public:
    virtual std::shared_ptr<Strategy> GetStrategy() = 0;
    virtual ~StrategyFactory() {}
};

class CNStrategyFactory : public StrategyFactory {
public:
    std::shared_ptr<Strategy> GetStrategy() override {
        return std::make_shared<CNStrategy>();
    }
};

class HKStrategyFactory : public StrategyFactory {
public:
    std::shared_ptr<Strategy> GetStrategy() override {
        return std::make_shared<HKStrategy>();
    }
};

class UKStrategyFactory : public StrategyFactory {
public:
    std::shared_ptr<Strategy> GetStrategy() override {
        return std::make_shared<UKStrategy>();
    }
};


class TaxExecutor {
private:
    std::shared_ptr<StrategyFactory> strategyFactory_;
public:
    TaxExecutor(std::shared_ptr<StrategyFactory> strategyFactory) : strategyFactory_(strategyFactory
    ) {}
    double execute() {
        return strategyFactory_->GetStrategy()->calculate();
    }
    void setStrategy(std::shared_ptr<StrategyFactory> strategyFactory) {
        this->strategyFactory_ = strategyFactory;
    }
};


#endif //PATTERNS_STRATEGY_H

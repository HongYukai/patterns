//
// Created by 12096 on 2022/12/30.
//

#ifndef PATTERNS_OBSERVER_H
#define PATTERNS_OBSERVER_H

#include <memory>
#include <vector>
#include <algorithm>

class Auctioneer {
public:
    virtual void update(int bid) = 0;
    virtual ~Auctioneer() {}
};

class AuctioneerX : public Auctioneer {
    void update(int bid) override {
        //! can be cooperate with strategy mode
        if (bid > 10) {
            printf("X gives up\n");
        }
        else {
            printf("X add to %d\n", bid + 1);
        }
    }
};

class AuctioneerY : public Auctioneer {
    void update(int bid) override {
        //! can be cooperate with strategy mode
        if (bid > 5) {
            printf("Y gives up\n");
        }
        else {
            printf("Y add to %d\n", bid + 1);
        }
    }
};

class AuctioneerZ : public Auctioneer {
    void update(int bid) override {
        //! can be cooperate with strategy mode
        if (bid > 20) {
            printf("Z gives up\n");
        }
        else {
            printf("Z add to %d\n", bid + 1);
        }
    }
};

class Auction {
private:
    std::vector<std::shared_ptr<Auctioneer>> observers_;
    int bid_;
public:
    void attach(std::shared_ptr<Auctioneer> observer) {
        observers_.push_back(observer);
    }
    void detach(std::shared_ptr<Auctioneer> observer) {
        observers_.erase(std::remove(observers_.begin(), observers_.end(), observer), observers_.end());
    }
    void NotifyAll() {
        for (auto observer : observers_) {
            observer->update(bid_);
        }
    }
    void SetState(int bid) {
        bid_ = bid;
    }
};

#endif //PATTERNS_OBSERVER_H

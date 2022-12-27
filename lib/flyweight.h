//
// Created by 12096 on 2022/12/28.
//

#ifndef PATTERNS_FLYWEIGHT_H
#define PATTERNS_FLYWEIGHT_H

#include <string>
#include <map>

class Font {
private:
    std::string key_;
public:
    Font(const std::string key) : key_(key) {}
    void hello() const {
        printf("%p\n", this);
    }
    int i = 0;
};

class FontFactory {
    static std::map<std::string, Font*> fontPool_;
public:
    static const Font* GetFont(const std::string key) {
        if (fontPool_.find(key) == fontPool_.end()) {
            fontPool_.insert(std::make_pair(key, new Font(key)));
        }
        return fontPool_[key];
    }
};

std::map<std::string, Font*> FontFactory::fontPool_ = std::map<std::string, Font*>();


#endif //PATTERNS_FLYWEIGHT_H

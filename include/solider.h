#ifndef _SOLIDER_H_
#define _SOLIDER_H_

#include <memory>
#include "gun.h"


class solider {
public:
    solider(std::string solider_name,std::string name, int bullet_once, int bullet_now);
    ~solider();
    void addGun(std::string name, int bullet_once, int bullet_now);
    void addBulletToGun();
    void fire();
    void soliderInfo();

private:
    std::string _solider_name;
    gun* _g;
    
};

#endif
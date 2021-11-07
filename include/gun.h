#ifndef _GUN_H_
#define _GUN_H_

#include<string>
#include <iostream>

class gun {
public:
    gun(std::string name, int bullet_once, int bullet_now) {
        this->_gun_name = name;
        this->_bullet_once = bullet_once;
        this->_bullet_now = bullet_now;
    }
    std::string get_gun_name(gun* g);
    void fire(int num);
    void reload();
private:
    std::string _gun_name;
    int _bullet_once;
    int _bullet_now = 0;
};

#endif
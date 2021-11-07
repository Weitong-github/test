#include "gun.h"

void gun::fire(int num) {
    std::cout<<"The bullet we have before shot " << num << " = " << _bullet_now<<std::endl;

    if(num >= _bullet_once && num <= _bullet_now) {
        _bullet_now -= _bullet_once;
    } else if(num >= _bullet_once && num > _bullet_now){
        _bullet_now = 0;
    } else if(num < _bullet_once && num >= _bullet_now){
        _bullet_now = 0;
    } else {
        _bullet_now -= num;
    }

    std::cout<<"The bullet we have after shot " << num << " = " << _bullet_now<<std::endl;
}

void gun::reload() {

}

std::string gun::get_gun_name(gun* g) {
    return g->_gun_name;
}
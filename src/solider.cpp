#include "solider.h"

solider::solider(std::string solider_name, std::string name, int bullet_once, int bullet_now) {
    _solider_name = solider_name;
    _g = new gun(name, bullet_once, bullet_now);
}

void solider::addGun(std::string name, int bullet_once, int bullet_now) {
    if(this->_g != nullptr) delete this->_g;
    this->_g = new gun(name, bullet_once, bullet_now);
}

void solider::addBulletToGun (){
    this->_g->reload();
}

solider::~solider() {
    if(this->_g != nullptr) delete this->_g;
    
    this->_g = nullptr;
    std::cout<<"The solider is deleted"<<std::endl;
}

void solider::fire() {
    // TODO
}

void solider::soliderInfo() {
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"Solider's name: "<<_solider_name<<std::endl;
    std::string gun_name = _g->get_gun_name(_g);
    std::cout<<"Gun's name: "<<gun_name<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
}
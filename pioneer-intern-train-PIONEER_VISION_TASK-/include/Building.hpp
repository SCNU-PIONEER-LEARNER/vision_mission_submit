#include <string>


#include "breakwhile.hpp"


#ifndef _BUILDING_HPP_
#define _BUILDING_HPP_

class Robot;

class Building
{
private:
    std::string type;
protected:

    int health;

public:
    friend void hitBuilding(Robot &rbt, Building &bds);
    Building(std::string bt , int h);
    bool Survive(){return health > 0;};
    int Health_(void) { return health; }
};

#endif
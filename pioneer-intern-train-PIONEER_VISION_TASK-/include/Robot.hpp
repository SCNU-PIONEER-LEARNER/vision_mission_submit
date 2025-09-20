#include <string>

#include "breakwhile.hpp"


#ifndef _BUILDING_HPP_
#include "Building.hpp"
#endif


#ifndef _ROBOT_HPP_
#define _ROBOT_HPP_

class Building;

class Robot{

    private:
        std::string type;
        int health;
        int basedamage;
        double hitAcc;

    public:
        Robot(std::string rt, int h, int bd, double hA);
        int damage(void);
        void Hit(Building &bds);
        void Hit(Robot &rbt);
        int Health_(void) { return health; }
};

void hitBuilding(Robot &rbt, Building &bds);

#endif


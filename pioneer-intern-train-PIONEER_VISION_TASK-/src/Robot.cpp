#include "../include/Robot.hpp"
#include <iostream>

bool bernouli_distribution(double p)
{
    if(p<=0.0)
        return false;
    if(p>=1.0)
        return true;

    int rd = std::rand();
    double drd = static_cast<double>(rd)/(RAND_MAX+0.01);

    return drd < p;
}

Robot::Robot(std::string rt, int h, int bd, double hA)
{
    type = rt;
    health = h;
    basedamage = bd;
    hitAcc = hA;
}

void hitBuilding(Robot &rbt, Building &bds){
    bds.health -= rbt.damage();
}

int Robot::damage(void){
    return basedamage;
}

void Robot::Hit(Building &bds)
{
    if (bernouli_distribution(hitAcc)){
        hitBuilding(*this, bds);
    }
}

void Robot::Hit(Robot &rbt){
    if (bernouli_distribution(hitAcc))
    {
        rbt.health -= damage(); 
    }
}
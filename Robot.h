#ifndef ROBOT_H
#define ROBOT_H
#include "ctime"
#include <vector>

class Building{
public:
    Building();
    Building(const char building_type[],int building_life);
    bool Survive();
    bool Invincible;
    bool Protected;
    bool Health_;
private:
    const char building_type;
    int building_life; 
};
class Robot{
public:
    Robot(); 
    Robot(const char type[], int life,int attack,double hit_rate);
    void Hit(Building building_target);
    void Hit(Robot robot_target);
    bool Survive();
    bool Health_;
private:
    const char type;
    int life;
    int attack;
    double hit_rate;
    Building building_target;
};

#endif
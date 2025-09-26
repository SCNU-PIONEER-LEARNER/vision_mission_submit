#include "Robot.h"
#include "iostream"
using namespace std;
int n;
Robot::Robot(const char type[],int life,int attack,double hit_rate):type(type[n]),life(life),hit_rate(hit_rate){}
Building::Building(const char building_type[],int building_life):building_type(building_type[n]),building_life(building_life){}

bool Building::Survive(){
    return true;
}
bool Robot::Survive(){
    return true;
}
bool Invincible=true;
bool Protected=true;
bool Health_=true;

void Robot::Hit(Building building_target){};
void Robot::Hit(Robot robot_target){};

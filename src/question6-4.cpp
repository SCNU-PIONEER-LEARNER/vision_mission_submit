#include <iostream>
#include <vector>

#include "../include/Bullet.hpp"

int main(){
    std::vector<Bullet> blt1;

    blt1.emplace_back(42, 1.0);
    blt1.emplace_back(17, 0.1);

    blt1[0].Show();
    blt1[1].Show();

    return 0;
}
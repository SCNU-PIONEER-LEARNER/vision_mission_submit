#include <iostream>
using namespace std;

void Ball (double size,string colour)
{
    cout << "球的半径是:" << size << "cm,颜色是：" << colour << endl;
}

int main()
{
    Ball (4,"黄色");
}
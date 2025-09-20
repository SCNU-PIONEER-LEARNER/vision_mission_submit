#include <iostream>
// using namespace std;
#include "cstd.hpp"

int main()
{
    int a, b, c, max;
    cin >> a;
    cin >> b;
    cin >> c;
    max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    cout << max;
}
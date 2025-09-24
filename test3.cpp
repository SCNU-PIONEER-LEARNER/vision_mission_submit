#include <random>
#include <iostream>
using namespace std;

int main ()
{
    random_device rd;
    mt19937 gen (rd());
    uniform_int_distribution<>dis(1,30);
    cout << "Ëæ»úÊýÊÇ£º " ;
    int i = dis(gen);
    cout << i << endl;
    return 0;
}
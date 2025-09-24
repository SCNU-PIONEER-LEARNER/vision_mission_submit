//找出1-10000中13的倍数
#include <iostream>
using namespace std;

int main()
{
    cout<<"13的倍数有:"<<endl;
    for (int i = 1; i < 10000; i++)
    {
        if (i % 13 == 0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int counter = 0;
    for (int i = 0;i <= 10000;i++)
    {
     if (i % 13 == 0)
     {
        counter++;
     }
    }
    cout << "1~10000中13的倍数有" << counter << "个" << endl;

    int numbers1[counter];
    int n = 0;
    for (int j = 0;j <= 10000;j++)
    {
        if (j % 13 == 0)
        {
            
            numbers1[n] = j;
            n++; 
        }
    }


    vector<int> numbers2;
    for (int k = 0;k <= 10000;k++)
    {
        if (k % 13 == 0)
        {
            numbers2.push_back(k);
        }
    }
     int size = numbers2.size();
     cout << "1~10000中13的倍数有" << size << "个" << endl;


     vector<int> num3;
     for (int i = 0;i <= 100;i++)
     {
        num3.push_back (i);
     }
     num3.erase(remove_if(num3.begin(),num3.end(),[](int x){return x % 2 != 0;}),num3.end());
    
     return 0;
    }
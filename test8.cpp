#include <iostream>
#include <vector>
using namespace std;

int main (void)
{
    vector<int> singular;
    vector<int> dual;
    vector<int> prime;
    
    
    for (int i = 1;i <= 100;i++)
    {
        if (i % 2 != 0)
        {
            singular.push_back(i);
        }
        else
        {
            dual.push_back(i);
        }
        
    }
    for (int n = 2;n <= 100;n++)
    {
        bool isPrime = true;

        if (n == 2)
        {
            isPrime = true;
        }
        else if (n % 2 == 0)
        {
            isPrime = false;
        }
        else
        {
         for (int j = 3; j*j <= n;j += 2)
         {
            if (n % j == 0)
            {
                isPrime = false;
                break;
            }
         }
        }
        if (isPrime)
        {
            prime.push_back(n);
        }
        
     
}
   cout << "同时是单数和质数的数为： " ;
   for (int k = 0;k < singular.size();k++)
   {
    for (int l = 0;l < prime.size();l++)
    {
        if (singular[k] == prime[l])
        {
            cout << prime[l] << " " ;
        }
    }
   }
   cout << endl;
   return 0;
}
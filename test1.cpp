#include <iostream>
using namespace std;

int main ()
{
   for (int i = 1;i < 10000;i++)
   {
    if (i % 13 == 0)
    {
        cout << i << endl;
    }
    
   }
   return 0;
}
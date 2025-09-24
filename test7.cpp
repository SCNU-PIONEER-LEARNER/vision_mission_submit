#include <iostream>
#include <vector>
#include <random>
#include <string>

using namespace std;

class p
{
private:
string size;

};



int main (void)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist (1,20);
    uniform_int_distribution<int> p_dist (0,1);
   
    int num1 = dist(gen);
    int num2 = dist(gen);
   
    
   
   vector<string> vec_p;
    
    for (int j = 0; j < num1 + num2;j++)
    {
        if (p_dist(gen) == 0)
        {
            vec_p.push_back ("42mm");
        }
        else
        {
            vec_p.push_back ("17mm");
        }
    }
    
    for (int n = 0;n < num1 + num2;n++)
    {
     
     cout << "µ¯ÍèÀàÐÍ£º " << vec_p[n] << endl;
    }
    

    return 0;
}
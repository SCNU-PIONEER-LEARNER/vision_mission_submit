#include "iostream"
#include <vector>
using namespace std;


int main()
{

    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int t=0;
    for (int i = 1; i<=100; i=i+2)
    {
        v1.push_back(i);
        v2.push_back(i+1);
        v3.push_back(i);              
    }
    int num,y,a=1;
    for (int n=1;n<50;n++)
    {
        num=v3[n];
        for(int t=2;t<num;t++)
        {
            y=num%t;
            if(y=0)
            {
                v3.erase(v3.begin()+a);
                a++;
            }
            else{
                a++;
            }

        }
    }
    for(int m=0;m<50;m++)
    {
        cout<<v3[m]<<endl;
    }
 
    return 0;
}

#include "iostream"
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }
    
    for(int i=0;i<=50;i++)
    {
        v.erase(v.begin()+i);
    }
    for(int n=1;n<=99;n++)
    {
        cout<<v[n]<<endl;
    }
    return 0;
}

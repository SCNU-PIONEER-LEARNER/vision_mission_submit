#include "iostream"
#include <vector>
using namespace std;


int main()
{
    int num=1,n=0,a;
    int nmu=1;
    vector<int>v;
    while (num<=10000){
        a=num%13;
        if(a==0)
        {
            v.push_back(num);
            n++;
            num++;
        }
        else{
            num++;
        }
    
    }
    cout<<v[768]<<endl;           //由6.1可以计算13倍数数字的数量共769个,此处用于验证是否正常存入
    return 0;
}
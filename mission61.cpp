#include "iostream"
using namespace std;

int main()
{
    int num=1,n=0,a,c=0,d;
    int b=1;
    while (b<=10000)
    {
        d=b%13;
        if(d==0)
        {
            b++;
            c++;
        }
        else{
            b++;
        }  
    }
    int v[c];
    while (num<=10000){
        a=num%13;
        if(a==0)
        {
            v[n]=num;
            cout<<v[n]<<endl;          //用于验证是否存入成功
            n++;
            num++;
        }
        else{
            num++;
        }
    
    }
    return 0;
}
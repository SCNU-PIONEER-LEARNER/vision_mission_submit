#include "iostream"
#include "random"
using namespace std;

int get_random_num(int min,int max){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min,max);
    int random_number=dis(gen);
    return random_number;
}

int En(int n){
    if (n==1 || n==2)
    {
        return 1;
    }
    else{
        return En(n-1)+En(n-2);
    }
}

int main()
{   
    int A=2,n=3,L=2;
    while(A<100){
        int num=get_random_num(0,1);
        if(num==0)
        {
            En(n);
            A=A+2*En(n);           //一个是本身的经验，另一个是奖励
            L++;
            n++;
        }
        else{
            A=A-En(L)/2;
            n++;
        }
    }
    cout<<"YOU ARE WELCOME TO JOIN PIONEER!"<<endl;
    return 0;
}
#include "iostream"
#include <cmath>
#include "random"
using namespace std;

class ball
{
private:
    int m_R,m_money;

public:
    void setR(int t)
    {
        m_R=t;
    }    
    double getR()
    {
        return m_R;
    }
    
    void setmoney(int n)
    {
        m_money=n; 
    } 
    double getmoney()
    {
        return m_money;      
    }
};


int get_random_num(int min,int max){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min,max);
    int random_number=dis(gen);
    return random_number;
}

void add(int a,int b,int &p){
    p=a+b;
}

void exchange(int &x, int &y){
    int t=x;
    x=y;
    y=t;
}

int main()
{
    ball big;
    big.setR(42/2);
    big.setmoney(799/500);
    ball small;
    small.setR(17/2);
    small.setmoney(479/30);
    
    int A=2,a=1,b=1,p;
    while(A<100){
        int num=get_random_num(0,1);
        if(num==0)
        {
            add(a,b,p);
            A=A+2*p;
            exchange(a,b);
            exchange(b,p);            
        }
        else{
            A=A-p/2;
        }
    }

    cout<<"YOU ARE WELCOME TO JOIN PIONEER!"<<endl;
    int bs=get_random_num(0,1);
    if(bs==0)
    {
        cout<<"你获得了小弹丸" <<"半径是"<<small.getR()<<"价格是"<<small.getmoney()<<endl;
    }
    else{
        cout<<"你获得了大弹丸" <<"半径是"<<big.getR()<<"价格是"<<big.getmoney()<<endl;
    }
    return 0;
}
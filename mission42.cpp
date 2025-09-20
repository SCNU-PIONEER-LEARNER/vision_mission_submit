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
    int A=2,a=1,b=1,p;
    while(A<100){
        int num=get_random_num(0,1);
        if(num==0)
        {
            add(a,b,p);
            A=A+2*p;
            exchange(a,b);
            exchange(b,p);
            cout<<A<<endl;        //用于验证            
        }
        else{
            A=A-p/2;
        }
    }
    cout<<"YOU ARE WELCOME TO JOIN PIONEER!"<<endl;
    return 0;
}
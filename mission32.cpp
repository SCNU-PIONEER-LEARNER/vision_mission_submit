#include "string"
#include "iostream"
using namespace std;

int main()
{
    double  num;
    cout<<"请输入一个分数"<<endl;
    cin>>num;
    int value;
    if(num>60)
    {
        value=1;
    }
    else{
        value=0;
    };

    switch(value){
        case 1:
        cout<<"合格"<<endl;
        break;
        
        case 0:
        cout<<"不合格"<<endl;
        break;
    }

    return 0;
}
#include "iostream"
using namespace std;

int main()
{
    int num=1,a;
    while (num<=10000){
        a=num%13;
        if(a==0)
        {
            cout << num << endl;
            num++;
        }
        else{
            num++;
        }
    
    }
    return 0;
}

#include <iostream>

// using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main(){
    int fenshu = -1;
    cout << "请输入分数" << endl;
    cin >> fenshu;
    while(fenshu<0||fenshu>100){
        cout << "分数输入错误，请重新输入" << endl;
        cin >> fenshu;
    }

    switch(fenshu>=60){
        case 0:{
            cout << "不合格" << endl;
            break;
        }
        case 1:{
            cout << "合格" << endl;
            break;
        }
    }

    system("pause");

    return 0;
}
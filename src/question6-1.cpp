#include <iostream>

#include "../include/Bullet.hpp"

int main(){
    
    int maxn = 0;
    // cin >> maxn;
    maxn = 10000;

    int size_arr = maxn / 13;
    int arr[size_arr];
    int index = 0;

    // 加法可比乘法好算
    for (int num = 13; num < maxn;num+=13){
        arr[index] = num;
        index++;
    }


    // 输出
    index = 0;
    for (int u = 0; u < size_arr;u++){
        cout << arr[u]<<"\t";
        index++;
        if(index>=5){
            cout << endl;
            index = 0;
        }
    }

        return 0;
}
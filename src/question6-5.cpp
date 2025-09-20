#include <iostream>
#include <vector>

#include "../include/cstd.hpp"

int main(){

    std::vector<int> singalnum;
    std::vector<int> doublenum;
    std::vector<int> primernum;

    // 奇数存储
    for (int i = 1; i < 100;i+=2){
        singalnum.push_back(i);
    }

    // 偶数存储
    for (int i = 0; i <= 100;i+=2){
        doublenum.push_back(i);
    }

    // 质数存储
    primernum.push_back(2);
    for (int i = 3; i <= 100;i+=2){
        bool isprime = true;
        for (auto it = primernum.begin(); it != primernum.end();++it)  // 据说++it性能比it++更好
        {
            if (i%(*it)==0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            primernum.push_back(i);
        }
    }

    // 所求输出
    short cnt = 0;
    for (auto it = primernum.begin() + 1; it != primernum.end();++it){
        cout << *it << "\t";
        ++cnt;
        if (cnt == 5){
            cout << endl;
            cnt = 0;
        }
    }

        return 0;
}
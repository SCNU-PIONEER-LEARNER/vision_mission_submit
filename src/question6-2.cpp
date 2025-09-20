#include <iostream>
#include <vector>

#include "../include/cstd.hpp"

int main(){
    int maxn = 0;
    // cin >> maxn;
    maxn = 10000;

    // int size = maxn / 13;
    std::vector<int> vec1;
    int index = 0;

    for (int num = 13; num<=maxn;num+=13){
        vec1.push_back(num);
    }

    // 输出
    index = 0;
    for (int u = 0; u < maxn/13; u++)
    {
        cout << vec1[u] << "\t";
        index++;
        if (index >= 5)
        {
            cout << endl;
            index = 0;
        }
    }

    return 0;
}
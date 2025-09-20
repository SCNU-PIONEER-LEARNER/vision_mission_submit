#include <iostream>
#include <vector>

#include "../include/cstd.hpp"

int main(){
    std::vector<int> vec2;
    for (int i = 1; i < 100;i++){
        vec2.push_back(i);
    }

    for (int i = 0; i <50;i++){
        vec2.erase(vec2.begin()+i);
    }

    // 输出
    int index = 0;
    for (int u = 0; u < 50; u++)
    {
        cout << vec2[u] << "\t";
        index++;
        if (index >= 5)
        {
            cout << endl;
            index = 0;
        }
    }

            return 0;
}
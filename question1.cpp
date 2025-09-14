#include <iostream>

int main(){
    int range = 10000;
    int i = range / 13;
    int cnt = 0;
    for (int t = 1; t <= i;t++){
        std::cout << t * 13 << "\t";
        cnt++;
        if(cnt==5){
            std::cout << std::endl;
            cnt = 0;
        }
    }

        return 0;
}
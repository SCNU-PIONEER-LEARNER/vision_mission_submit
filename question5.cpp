#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include "Bullet.hpp"
/********************************************注意：此段代码不会自动结束，请谨慎运行*****************************************************/

    // using namespace std;
using std::cin;
using std::cout;
using std::endl;

int add1(const int a, const int b){
    return a + b;
}

int add2(const int& a, const int& b){
    return a + b;
}

int main(){
    std::random_device seed_rd;
    std::mt19937 rd(seed_rd());
    std::bernoulli_distribution boolrd(0.1);
    std::uniform_int_distribution<int> intrd(0, 30);

    int exp = 0, exp0 = 1, exp1 = 1, exp2 = 0;
    int &e1 = exp1, &e2 = exp2;
    int amts = 0, amtb = 0 , amtst = 0 , amtbt = 0;
    Bullet Bbullet(42,1), Sbullet(17,0.1);
    int day = 1;
    bool status = false;

    while(exp<100)
    {
        status = ((intrd(rd)) > 10); // 三天打鱼两天晒网
        switch (status)
        {
        /* *此处奖励机制要求是否有问题，既然是“斐波那契数列”，那么E(n)=E(n-1)+E(n-2)才对吧，
         *此处当成E(n)=E(n-1)+E(n-2)（毕竟我也没这能力预测明天啊）
         **/
        case 0:
        {
            // exp0 = add1(exp1 , exp2);
            exp0 = add2(e1, e2);
            exp += exp0;
            exp2 = exp1;
            exp1 = exp0;
            break;
        }

        case 1:
        {
            exp0 = -exp1 / 2;
            exp += exp0;
            break;
        }
        }
        cout << "今天是第" << day++ << "天，今日获取经验:" << exp0 << "  ，总经验:" << exp << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1)); // 控制运行速度
    
        while(exp>=100){
            //TODO:一次把弹丸获取完--had done
            switch (boolrd(rd))
            {
                case 0:
                {
                    // cout << "获得小弹丸，价格:" << Sbullet.printPrice() << "金币/枚，当前持有数量:" << ++amts << endl;
                    amtst++;
                    exp -= 100;
                    break;
                }
                case 1:
                {
                    // cout << "获得大弹丸，价格:" << Bbullet.printPrice() << "金币/枚，当前持有数量:" << ++amtb << endl;
                    amtbt++;
                    exp -= 100;
                    break;
                }
            }
        }
        if(amtbt){
            cout << "获得大弹丸，价格:" << Bbullet.printPrice() << "金币/枚，今日获得:" << amtbt << "枚，当前持有数量:" << (amtb += amtbt) << endl;
            amtbt = 0;
        }
        if (amtst){
            cout << "获得小弹丸，价格:" << Sbullet.printPrice() << "金币/枚，今日获得:" << amtst << "枚，当前持有数量:" << (amts += amtst) << endl;
            amtst = 0;
        }
    }


    /*测试结果：基本都30天左右，看一下时间，今天9月13日，就算三天打鱼两天晒网也来得及，事已至此先摆烂吧（不是，
     *没有真的在摆）*/
   
    return 0;
}
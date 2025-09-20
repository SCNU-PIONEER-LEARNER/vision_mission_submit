#include "cstd.hpp"

class Circle{
    private:
    int r; // unit : micro meter
    public:
    void Rin(int ra){
        r = ra;
    }
    int Rout(void){
        return r;
    }
};

class Bullet:protected Circle{
    protected:
        float price;

    public:
        Bullet(int r, float tprice)
        {
            Rin(r);
            price = tprice;
        };

        float printPrice(void){
            return price;
        };
        void Show(void){
            cout << "弹丸类型：" << Circle::Rout() << "mm弹丸，价格：" << Bullet::printPrice() << "金币/枚" << endl;
        }
            // protected:

    
        
};
#include "iostream"
#include <cmath>
#include "random"
using namespace std;

int get_random_num(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis;
    int random_number=dis(gen);
    return random_number;
}

class ball
{
private:
    int m_R;

public:
    void setD(int t)
    {
        m_R=t;
    }    
    double getD()
    {
        return m_R;
    }
};

int main()
{
    int n=get_random_num();
    vector<ball>v(n);
    ball big;
    big.setD(42);
    ball small;
    small.setD(17);
    
    cout<<"大弹丸的规格是"<<big.getD()<<endl;
    cout<<"小弹丸的规格是"<<small.getD()<<endl;
    return 0;
}
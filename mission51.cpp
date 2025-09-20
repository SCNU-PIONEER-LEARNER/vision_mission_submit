#include "iostream"
#include <cmath>
using namespace std;

class ball
{
private:
    int m_R;

public:
    void setR(int t)
    {
        m_R=t;
    }    
    int getR()
    {
        return m_R;
    }
    double calculateS()
    {
        return 4*M_PI*pow(m_R,2);
    }
    double calculateV()
    {
        return 4/3*M_PI*pow(m_R,3);
    }
};

int main()
{
    ball b;
    b.setR(5);
    cout<<b.calculateV()<<endl;
    return 0;
}
#include <random>
#include <iostream>
using namespace std;

int main ()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dis(0,1);

    int CurrentState;
    double DailyPoint = 0;
    double TotalPoint = 0;
    int day = 1;
    double PreviousPoint1 = 0;
    double PreviousPoint2 = 0;
    double LastPoint = 0;

    
    while( TotalPoint<= 100 && day < 1000)
    {
       CurrentState = dis(gen);
       if (CurrentState == 0)
       {
        if (day == 1)
        {
         DailyPoint = 1;
         LastPoint = DailyPoint;
         TotalPoint += DailyPoint;
        
        }
        else if (day == 2)
        {
            DailyPoint = PreviousPoint1 + 1;
            LastPoint = DailyPoint;
            TotalPoint += DailyPoint;
        }
        else
        {
            DailyPoint = PreviousPoint1 +PreviousPoint2;
            TotalPoint += DailyPoint;
            LastPoint = DailyPoint;
            
        }
        
       } 
       else
       {
        DailyPoint = - LastPoint/2;
        TotalPoint += DailyPoint;
        
       }
       PreviousPoint2 = PreviousPoint1;
       PreviousPoint1 = DailyPoint;
       day++;
       
    }
    cout << "YOU ARE WELCOME TO JOIN PIONEER!" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main ()
{
   int score;
   do
   {
    cout << "请输入分数： " ;
    cin >> score;
   }
   while(score < 0 || score > 100);
   
   switch(score >= 60)
   {
    case true:
    cout << "合格" << endl;
    break;
    default:
    cout << "不合格" << endl;
    break;
   } 
   return 0;
}
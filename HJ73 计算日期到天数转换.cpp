#include <iostream>
using namespace std;
int main()
{
    int year;
    int month;
    int date;
    
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(cin>>year>>month>>date)
    {
        int outDay=0;
        if(((year%100==0)&&(year%400==0)) || ((year%100!=0)&&(year%4==0)))
        {
            a[1]=29;
        }
        int i;
        for(i = 0; i < month-1; i++)
        {
            outDay += a[i];
        }
        outDay += date;
        a[1] = 28;
        cout<<outDay<<endl;
    }
}

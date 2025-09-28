#include <iostream>
using namespace std;

 int main()
 {
     string s;
     while(getline(cin, s))
     {
         int ch = 0;
         int num = 0;
         int space = 0;
         int other = 0;
         for(auto c:s)
         {
             if(c == ' ')
             {
                 space++;
             }
             else if(c >= '0' && c <= '9')
             {
                 num++;
             }
             else if(c >= 'a' && c <= 'z')
             {
                 ch++;
             }
             else if(c >= 'A' && c <= 'Z')
             {
                 ch++;
             }
             else
             {
                 other++;
             }
         }
         cout << ch << endl;
         cout << space << endl;
         cout << num << endl;
         cout << other << endl;
     }
     return 0;
 }

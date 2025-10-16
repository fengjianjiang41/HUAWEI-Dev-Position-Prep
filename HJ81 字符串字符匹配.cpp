#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str1;
    string str2;
    while (getline(cin, str1), getline(cin, str2))
    {
        bool flag = true;
        for (int i = 0; i < str1.size(); i++)
        {
            if (str2.find(str1[i]) == -1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
}

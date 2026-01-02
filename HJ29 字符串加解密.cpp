#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        string res;
        for(auto x : str)
        {
            if(isdigit(x))
            {
                if(x == '9') res.push_back('0');
                else res.push_back(x+1);
            }
            else
            {
                if(x == 'Z') res.push_back('a');
                else if(x == 'z') res.push_back('A');
                else if(islower(x)) {x++; res.push_back(x-32);}
                else {x++; res.push_back(x+32);}
            }
        }
        cout << res << endl;
        cin >> str;
        res = "";
        for(auto x : str)
        {
            if(isdigit(x))
            {
                if(x == '0') res.push_back('9');
                else res.push_back(x-1);
            }
            else
            {
                if(x == 'a') res.push_back('Z');
                else if(x == 'A') res.push_back('z');
                else if(x >= 'a' && x <= 'z') {x -= 32; res.push_back(x-1);}
                else {x += 32; res.push_back(x-1);}
            }
        }
        cout << res << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum=2*n+3*(n-1)*n/2;
        cout<<sum<<endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double k;
    cin >> n ;
    cin >> k;

    vector<double> price(n);
    string discount;

    for (int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp ;
        price[i] = temp;
    }
    cin >> discount ;

    for ( int i = 0 ; i < n ; i++)
    {
        if (discount[i] == '1')
        {
            price[i] *= 0.95;
        }
    }
    int count = 0;
    sort(price.begin(),price.end());
    for(int i = 0 ; i < n ;i++)
    {   
        if ( k < price[i])
        break;
        if( k >= price[i])
        {
            count++;
            k -= price[i];
        }

    }
    cout << count ;
    return 0;

}

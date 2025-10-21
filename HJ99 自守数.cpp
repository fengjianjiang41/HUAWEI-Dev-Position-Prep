#include<iostream>
using namespace std;
class Solution{
public:
    static int CalcAutomorphicNumbers(int number){
        int i = 0, index;
        int count = 0;
        while(i <= number){
            index = i;
            int pow = index * index;
            while(index){
                if(pow%10 != index%10)
                    break;
                index = index / 10;
                pow = pow/10;
            }
            if(index == 0)
                count++;
            i++;
        }
        return count;
    }
};
int main()
{
    int n;
    Solution sol;
    while(cin >> n)
        cout << sol.CalcAutomorphicNumbers(n) << endl;
    return 0;
}

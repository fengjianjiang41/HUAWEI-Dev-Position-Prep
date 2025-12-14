#include <iostream>

using namespace std;

int main(int argc, char **args){
    ios::sync_with_stdio(false);
    
    int m;
    while(cin >> m){
        int next;
        int state = 1;
        int count = 0;
        for(int i = 0; i < m; ++i){
            cin >> next;
            if(next == 1){
                state = 0;
            }else{
                ++state;
                if(state == 3){
                    ++count;
                    state = 1;
                }
            }
        }
        if(state == 2){
            ++count;
        }
        
        int n;
        cin >> n;
        
        cout << (n <= count ? "true" : "false") << endl;
    }
}

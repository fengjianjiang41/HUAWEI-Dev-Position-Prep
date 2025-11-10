// 牌桌上有 n 种不同的卡牌，第 i 种卡牌有 ai 张。
// 初始时，所有的卡牌均背面朝上，但不知道其确切的种类。
// 你有两次翻牌机会，翻牌后，如果两张卡牌种类一致，那你就输了。
// 两次翻牌同时进行（不存在根据翻开的第一张牌更改策略的情况）。
// 你不喜欢运气游戏，所以你可以通过手段随机预知 k 张卡牌后再进行游玩。
// 然而，预知很累！你想要知道，你至少需要预知多少张卡牌，才能保证你不会输。

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    // 加速IO
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //  =================  输入部分 =============
    int k;
    cin >> k;

    //  =================  输出部分 =============
    while(k--){
        int n;
        cin >> n;
        vector<int> a(n);

        int max_n = 0;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            max_n = a[max_n] > a[i] ? max_n : i;
        }


        if( n <= 1){ cout << -1 << "\n";continue;}

        else if( n > 1){
            // 全是 1 时，说明随便翻两张都必胜，所以 ans = 0
            // 只有一个 > 1 时，只要 max - 1 张
            // 其他情况 多个 > 1
            // 因为我们预知 max 张相同的卡牌后，就知道了剩下的所有卡牌和已经知道的卡牌都是不一样的，从这两堆里各选一张即可。
            int ans = a[max_n] - 1;
            for(int i = 0 ; i < n ; i++){
                if( i != max_n && a[i] != 1){
                    ans = a[max_n];
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}

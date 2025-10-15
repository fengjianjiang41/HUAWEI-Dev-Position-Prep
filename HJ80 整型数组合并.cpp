#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        cin >> m;
        for (int i = n; i < n + m; ++i) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        auto unique_end = unique(v.begin(), v.end());
// unique()函数

// 作用：去除相邻的重复元素

// 返回值：返回一个迭代器，指向去重后新逻辑结尾的下一个位置

// 特点：

// 只去除相邻的重复元素，所以通常需要先sort()

// 不真正删除元素，只是把不重复的元素移到前面

// 返回位置之后的元素值是不确定的

//auto关键字

// 自动类型推导，让编译器根据unique()的返回值类型自动确定unique_end的类型

// 等价于：vector<int>::iterator unique_end = unique(v.begin(), v.end());
        v.erase(unique_end, v.end());

// erase()函数
// 作用：真正删除容器中指定范围的元素

// 参数：两个迭代器，表示要删除的范围

// 效果：删除从unique_end到v.end()的所有元素

        for (int i = 0; i < v.size(); i++)
            cout << v[i];
        cout << endl;
    }
    return 0;
}

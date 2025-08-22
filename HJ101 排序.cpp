#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    while (cin >> N) {

        vector <int> array(N);

        for (int i = 0; i < N; ++i)
            cin >> array[i];
        int mode;
        cin >> mode;
        sort (array.begin(), array.end());

        if (mode == 1)
            reverse (array.begin(), array.end());


        for (int i = 0; i < array.size() - 1; ++i)
            cout << array[i] << " ";
        cout << array[N - 1] << endl;
    }
    return 0;
}
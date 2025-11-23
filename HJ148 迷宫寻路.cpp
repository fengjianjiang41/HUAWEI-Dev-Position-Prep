#include <iostream>
#include <vector>

using namespace std;

bool dfs(vector<vector<char>>& graph, int i, int j, int n, int m)
{
    if ( i == n - 1 && j == m - 1)
    return true;
    if ( i < 0 || i >= n || j < 0 || j >= m || graph[i][j] == '#')
    return false;

    graph[i][j] = '#';

    return dfs(graph, i + 1, j, n, m) || dfs(graph, i - 1, j, n, m) || dfs(graph, i, j + 1, n, m) || dfs(graph, i, j - 1, n, m);

}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> graph(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    graph[0][0] = '.';
    graph[n - 1][m - 1] = '#';

     if (dfs(graph, 0, 0, n, m))
     {
         cout << "Yes";
     }
     else
     {
         cout << "No";
     }
     return 0;


}

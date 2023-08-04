#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int depth[N], height[N];
vector<int> g[N];
void dfs(int vertex, int parent)
{
    for (int child : g[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << depth[i] << " " << height[i] << endl;
    }

    return 0;
}
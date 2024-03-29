#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int depth[N];

void dfs(int v ,int par=-1){
    for(int child:g[v]){
        if(child==par)continue;
        depth[child]=depth[v]+1;
        dfs(child ,v);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
   dfs(1);
    int max_depth=-1;
    int max_depth_node;
    for(int i=1;i<=n;i++){
        if(max_depth<depth[i]){
            max_depth=depth[i];
            max_depth_node=i;
        }
        depth[i]=0;
    }
    dfs(max_depth_node);
    max_depth=-1;
    for(int i=1;i<=n;i++){
        if(max_depth<depth[i]){
            max_depth=depth[i];
            
        }
        
    }
    cout<<max_depth<<endl;


  return 0;
}
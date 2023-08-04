#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int par[N];
void dfs(int v ,int p=-1){
    par[v]=p;
    for(int child:g[v]){
        if(child==p)continue;
        dfs(child,v);
    }
}

vector<int>path(int v){
    vector<int>ans;
    while(v!=1){
        ans.push_back(v);
        v=par[v];

    }
    reverse(ans.begin(),ans.end());
    return ans;

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
   int p,q;
   cin>>p>>q;
   vector<int>path_p=path(p);
   vector<int>path_q=path(q);
   int mn_len=min(path_p.size(),path_q.size());
   int lca=-1;
    for(int i=0;i<mn_len;i++){
        if(path_p[i]==path_q[i]){
            lca=path_p[i];
        }
        else{
            break;
        }
    }
    cout<<lca<<endl;

  return 0;
}
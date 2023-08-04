#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int subtree_sum[N];
int even_ct[N];
vector<int>g[N];

void dfs(int vertx, int par=0){
                   
     if (vertx % 2==0 ) even_ct[vertx]++;
    subtree_sum[vertx]+=vertx;
    
    for(int child:g[vertx]){

        if(child==par)continue;
        dfs(child,vertx);

        subtree_sum[vertx]+=subtree_sum[child];
        even_ct[vertx]+=even_ct[child];

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
    for(int i=0;i<n;i++){
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
    }
    // int q;
    // while(q--){
    //     int v;
    //     cin>>v;
        
    //     cout<<subtree_sum[v]<<" "<<even_ct[v]<<endl;
    // }


  return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int> g[N];
void dfs(int vertex){
   cout<<vertex<<endl;
   // if(vis[vertex]){
   //    return;
   // }
   vis[vertex]=true;
     for(int child:g[vertex]){
          if(vis[child]){
            continue;
          }
        cout<<"Parent--> "<<vertex<<", child-->"<<child<<endl;

        dfs(child);
     }

}
int main()
{
   int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    dfs(1);
  return 0;
}
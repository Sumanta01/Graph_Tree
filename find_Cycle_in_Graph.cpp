#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
bool visit[N];
vector<int>graph[N];    

void dfs(int vertex){
    visit[vertex]=true;
    for(int child:graph[vertex]){
        if(visit[child]) continue;
        
        dfs(child);
    }
}
int main()
{
   int  n ,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(visit[i]) continue;
            
            dfs(i);
            count++;
        
        
    }
    cout<<count<<endl;



  return 0;
}
#include<bits/stdc++.h>
using namespace std;
void AlphaPattern(int n){
    int i=1;
    int j=65;
    while(i<=n){
        int k=1;
        while(k<=i){
            cout<<(char)j;
            k++;
        }
        cout<<endl;
        i++;
        j++;

    }
}
void AlphaPattern2(int n){
    int k=65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<(char)k;
          
        }
        k++;
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    AlphaPattern(n);
    AlphaPattern2(n);
  return 0;
}
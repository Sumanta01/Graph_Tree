#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void sum_int(int n){
   long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
}
int main()
{
     int n=1000000000;
    auto start = high_resolution_clock::now();
    sum_int(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time taken by the function "<<duration.count()/1000000.0<<endl;

  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int solve()
{
   int n;
   cin>>n;
   map<int,int>_count_;
   for(int i=0;i<n;i++)
   {
       int m;
       cin>>m;
       _count_[m]++;
    }
    map<int,int>group_count;
    for(auto[x,y]:_count_)
    {
        group_count[y]++;
    }
    int length=(int) _count_.size();
    int result=n;
    for(auto[x,y]:group_count)
    {
        result=min(result,n-length*x);
        length-=y;
    }
    cout<<result<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--);
    solve();
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
const ll mod=1e9+7;
unordered_map<int,map<int,int>>mp,cnt;
int n,q,a[N];
int ans=1;
void solve(int pos,int x)
{
    for(int i=2;i*i<=x;i++)
    {
        while(x%i==0)
        {
            mp[pos][i]++;
            cnt[i][mp[pos][i]]++;
            if(cnt[i][mp[pos][i]]==n)
            {
              ans=(ans*i)%mod;
            }
            x/=i;
        }
    }
    if(x>1)
    {
        mp[pos][x]++;
            cnt[x][mp[pos][x]]++;
            if(cnt[x][mp[pos][x]]==n)
            {
              ans=(ans*x)%mod;
            }
    }

}
int main()
{
    cin>>n;
    cin>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        solve(i,a[i]);
    }
    while(q--)
    {
        int pos,val;
        cin>>pos;
        cin>>val;
        solve(pos,val);
        cout<<ans<<endl;
    }
}

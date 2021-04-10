#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>inp;
        int size=n;
        long long result;
        while(n--)
        {
            long long m;
            cin>>m;
            inp.push_back(m);
        }
        sort(inp.begin(),inp.end(),greater<long long>());
        result=max(inp[0]*inp[size-1]*inp[size-2]*inp[size-3]*inp[size-4],max(inp[0]*inp[1]*inp[2]*inp[size-1]*inp[size-2],inp[0]*inp[1]*inp[2]*inp[3]*inp[4]));
        cout<<result<<endl;

    }
}

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
        int sizes=n;
        vector<long long>inp;
        while(n--)
        {
            long long m;
            cin>>m;
            inp.push_back(m);
        }
        vector<long long>result;
        sort(inp.begin(),inp.end());
        int mid=sizes/2;
        result.push_back(inp[mid]);
        for(int i=1;i<=sizes-mid-1;i++)
        {
        result.push_back(inp[mid-i]);
           result.push_back(inp[mid+i]);

        }
        if(sizes%2==0)
        {
            result.push_back(inp[0]);
        }
        for(int j=0;j<sizes;j++)
        {
            cout<<result[j]<<" ";
        }
        cout<<endl;
    }
}

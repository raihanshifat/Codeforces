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
        long long sum=0;
        long long mark;
        while(n--)
        {
            long long m;
            cin>>m;
            inp.push_back(m);
        }
        mark=inp[0];
        for(int i=1;i<inp.size();i++)
        {
            if(inp[i]*mark>0)
            {
                if(inp[i]>mark)
                {
                    mark=inp[i];
                }
            }
            else
            {
                sum+=mark;
                mark=inp[i];
            }
        }
        cout<<sum+mark<<endl;
    }
}

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
        int m=0;
        int sum=0;
        while(sum< n)
        {
            m++;
            sum+=m;

        }
        if (sum-1==n)
        {
            m++;
        }
        cout<<m<<endl;
    }
}

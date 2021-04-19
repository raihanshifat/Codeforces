#include<bits/stdc++.h>
using namespace std;
long long GCD(long long x,long long y)
{
    if (y==0)
    {
        return x;
    }
    return GCD(y,x%y);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        long long x,y,z;
        z=pow(10,c-1);
        x=pow(10,a-c);
        y=pow(10,b-c);
        while(GCD(z*x,z*y)!=z)
        {
            y++;
        }

        cout<<z*x<<" "<<z*y<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a;
        cin>>b;
        a=abs(a-b);
        long long i=0;
        b=0;
        while(a>b||(b-a)%2!=0)
        {
            b+=i++;
        }
        cout<<i<<endl;

    }
}

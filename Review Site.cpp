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
        int _count=0;
        while(n--)
        {
            int m;
            cin>>m;
            if(m==1 || m==3)
            {
                _count++;
            }
        }
        cout<<_count<<endl;
    }
}

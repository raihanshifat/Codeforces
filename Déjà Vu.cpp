#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string inp;
        cin>>inp;
        string inp1=inp+'a';
        string rev_inp1 = string(inp1.rbegin(),inp1.rend());
        string inp2='a'+inp;
        string rev_inp2 = string(inp2.rbegin(),inp2.rend());
        if(inp1.compare(rev_inp1)!=0)
        {
            cout<<"YES"<<endl;
            cout<<inp1<<endl;
        }
        else if(inp2.compare(rev_inp2)!=0){
            cout<<"YES"<<endl;
            cout<<inp2<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int m=(k-1)/2;
        vector<int>result;
        for(int i=n;i>k;i--)
        {
            result.push_back(i);
        }
        for(int i=k-1;i>m;i--)
        {
            result.push_back(i);
        }
        cout<<result.size()<<endl;
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;

}
}

#include<bits/stdc++.h>
using namespace std;
int get_result(vector<int>vec)
{
    int m=vec.size();
    if(vec.size()==1)
    {
        return 0;
    }
    int j=m-2;
    while(vec[j]==vec[m-1])
    {
        j--;
    }
    if(vec[m-1]>vec[j])
    {
        for(int i=j;i>=0;i--)
        {
            if(vec[i]>vec[i+1])
            {
                return i+1;
            }
        }
    }
    if(vec[m-1]<vec[j])
    {
        bool flag=false;
        for(int i=j;i>=0;i--)
        {
            if(vec[i]<vec[i+1])
            {
                flag=true;
            }
            if(vec[i]>vec[i+1] && flag==true)
            {
                return i+1;
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int j;
            cin>>j;
            vec.push_back(j);
        }
        int result=get_result(vec);
        cout<<result<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
vector<int> max_min(long long n)
{
    vector<int>result;
    int minimum=10;
    int maximum=0;
    while(n>0)
    {
        long long remain=n%10;
        if(remain>maximum)
        {
            maximum=remain;
        }
        if(remain<minimum)
        {
            minimum=remain;
        }
        n/=10;
    }
    result.push_back(minimum);
    result.push_back(maximum);
    return result;
}
long long sum_result(long long a,long long n)
{
    if(n==1)
    {
        return a;
    }
    return sum_result(a,n-1)+max_min(sum_result(a,n-1))[0]*max_min(sum_result(a,n-1))[1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,n;
        cin>>a;
        cin>>n;
        long long result=sum_result(a,n);
        cout<<result<<endl;
    }
}

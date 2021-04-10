#include<bits/stdc++.h>
using namespace std;
const long long Max_no=1000000000;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long result;
        long long max_limit=0;
        map<long long,long long>number_count;
        vector<long long>number;
        long long n;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            long long m;
            cin>>m;
            number.push_back(m);
            number_count[m]++;
            if(number_count[m]>max_limit)
            {
                max_limit=number_count[m];
            }
        }

        if(max_limit>(n-max_limit))
        {
            result=max_limit-(n-max_limit);
        }
        else
        {
            if(n%2==1)
            {
                result=1;
            }
            else{
            result=0;
            }

        }
        cout<<result<<endl;
    }
}

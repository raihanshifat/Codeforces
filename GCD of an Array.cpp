#include<bits/stdc++.h>
using namespace std;
long long unsigned gcd(long long unsigned a,long long unsigned b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);

}
int main()
{

        long long unsigned n,k;
        cin>>n;
        cin>>k;
        vector<long long unsigned>vec;
        vector<long long unsigned>result_vec;
        for(long long unsigned i=0;i<n;i++)
        {
            long long unsigned m;
            cin>>m;
            vec.push_back(m);
        }
        vector<vector<long long unsigned>>query;
        for(long long unsigned j=0;j<k;j++)
        {
            long long unsigned x;
            long long unsigned y;
            vector<long long unsigned>temp;
            cin>>x;
            cin>>y;
            temp.push_back(x);
            temp.push_back(y);

            query.push_back(temp);
        }
        for(long long unsigned i=0;i<query.size();i++)
        {
            vec[query[i][0]-1]*=query[i][1];
            long long unsigned result=vec[0];
            for(long long unsigned j=1;j<vec.size();j++)
            {

                result=gcd(vec[j],result);
            }
            result_vec.push_back(fmod(result,pow(10,9)+7));

        }
        for(long long unsigned j=0;j<result_vec.size();j++)
        {
            cout<<result_vec[j]<<endl;
        }


}

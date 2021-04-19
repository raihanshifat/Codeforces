#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        float k;
        cin>>n;
        cin>>k;
        float coeff=k/100;
        vector<float>inp;
        while(n--)
        {
            float m;
            cin>>m;
            inp.push_back(m);
        }
        float sum=inp[0];
        int toAdd=0;
        for(int i=1;i<inp.size();i++)
        {
            if((inp[i]/sum)>coeff)
            {

                float reqsum=inp[i]/coeff;

                toAdd+=ceil(reqsum)-sum;
                sum=ceil(reqsum)+inp[i];

            }
            else{
                sum=sum+inp[i];
            }
        }
        cout<<toAdd<<endl;
    }
}

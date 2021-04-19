#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
        int q;
        int size_=n;
        cin>>n;
        cin>>q;
        vector<int>inp;
        vector<int>inp_col;
        vector<int>result;
        while(n--)
        {
            int m;
            cin>>m;
            inp.push_back(m);
        }
         while(q--)
        {
            int r;
            cin>>r;
            inp_col.push_back(r);
        }
        for(int i=0;i<inp_col.size();i++)
        {
            int min_index;
            for(int j=0;j<inp.size();j++)
            {
                if(inp[j]==inp_col[i])
                {
                    result.push_back(j+1);
                    min_index=j;
                    break;
                }
            }
            for(int k=min_index;k>0;k--)
            {
                int temp=inp[k];
                inp[k]=inp[k-1];
                inp[k-1]=temp;
            }

        }
        for(int l=0;l<result.size();l++)
        {
            cout<<result[l]<<" ";
        }
        cout<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n;
        cin>>n;
        int loop=2*n;
        vector<int>inp;
        while(loop--)
        {
            int m;
            cin>>m;
            inp.push_back(m);
        }
        int result=-1;
        int cycle=n%2==0?4:2*n;
        for(int i=0;i<cycle;i++)
        {
            if(is_sorted(inp.begin(),inp.end()))
            {
                result=i;
                break;
            }
            if(i%2){
               for(int a=0;a<n;a++)
            {
                swap(inp[a],inp[n+a]);
            }
            }
            else{
               for(int b=0;b<(2*n)-1;b+=2)
            {
                swap(inp[b],inp[b+1]);
            }
            }


        }
        cout<<min(cycle-result,result)<<endl;

}

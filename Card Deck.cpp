#include<bits/stdc++.h>
using namespace std;
int calculate(vector<int> vec)
{
    int result=0;
    int n=vec.size();
    for(int i=0;i<vec.size();i++)
    {
        result+=(pow(n,n-(i+1)))*vec[i];
    }
    return result;
}
vector<int> best_vec(vector<int>vec)
{
    vector<int> best_vector;
    while(vec.size()>0)
    {
        int max_num=0;
        int index=0;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]>max_num)
            {
                max_num=vec[i];
                index=i;
            }

        }
        for(int i=index;i<vec.size();i++)
        {
            best_vector.push_back(vec[i]);
        }
        vec.erase(vec.begin()+index,vec.end());
    }
    return best_vector;

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
            int p;
            cin>>p;
            vec.push_back(p);
        }
        vector<int> best_vector;
        best_vector=best_vec(vec);
        for(int i=0;i<best_vector.size();i++)
        {
            cout<<best_vector[i];
        }
        cout<<endl;
        int result;
        result=calculate(best_vector);
        cout<<result;

    }
}

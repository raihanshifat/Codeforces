#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5+5;
int vis[maxn];
int a[maxn];
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		queue<int>q;
		for(int i=1;i<=n;i++){
			if(a[i]>a[i-1]) {
				cout<<a[i]<<" ";
				for(int j=a[i-1]+1;j<a[i];j++) q.push(j);
			}
			else{
				cout<<q.front()<<" ";
				q.pop();
			}
		}
		cout<<"\n";
		stack<int>st;
		for(int i=1;i<=n;i++){
			if(a[i]>a[i-1]){
				cout<<a[i]<<" ";
				for(int j=a[i-1]+1;j<a[i];j++) st.push(j);
			}
			else{
				cout<<st.top()<<" ";
				st.pop();
			}
		}
		cout<<"\n";
	}
}

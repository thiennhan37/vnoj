#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int M=1e8;
vector<bool> v(M+1);
vector<int> a(M+1);
void f(int M){
	for(int i=2;i*i<=M;i++){
		if(v[i]==0){
			for(int j=i*i;j<=M;j+=i){
				v[j]=1;
			}
		}
	}
	a[1]=0;
	for(int i=2;i<=M;i++){
		if(!v[i]){
			a[i]=a[i-1]+1;}
		else a[i]=a[i-1];
	}
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
	f(M);
    while(1){
    	int x;cin>>x;
    	if(!x) break;
    	int k=a[x];
    	double res=fabs(k-x*1.0/log(x))*100/k;
    	cout<<setprecision(1)<<fixed<<res<<endl;
	}
    return 0;
}


	

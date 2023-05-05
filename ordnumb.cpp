#include<bits/stdc++.h>
using namespace std;
void code();
int main(){
	int t;
	cin>>t;
	while(t--){
		code();
	}
	return 0;
}
void code(){
  	int n,cnt=0;
	cin>>n;
	for(long long int i=1;i<=n;i=(i*10) + 1){
		for(int j=1;j<=9;j++){
			if(i*j<=n){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
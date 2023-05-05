#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,q;
    cin>>n>>q;
    int a[n],b[n]={0};
    int sum=0;
    for (int i = 0; i < n; ++i){
		cin>>a[i];
		sum+=a[i];
	}
	b[0]=a[0];
	for (int i = 1; i < n; ++i){
		b[i] = a[i] + b[i-1];
	}
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int sum2=sum-(b[r-1]-b[l-1]+a[l-1])+(r-l+1)*k;
        if(sum2%2==0){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
}
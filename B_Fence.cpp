// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
 	int n,k;
 	cin>>n>>k;
 	int a[n+1];
	a[0]=0;
 	int sum=0;
 	for (int i=0;i<n;i++){
 		int x;
        cin>>x;
 		sum+=x;
        a[i+1]=sum;
 	}
 	int y=-99, m=INT_MAX;
 	for(int i=0;i<n;i++){
 		if ((i+k)<=n && m>(a[i+k]-a[i])){
 			m=(a[i+k]-a[i]);
 			y=i;
 		}
 	}
 	cout<<y+1<<endl;
    return 0;
}
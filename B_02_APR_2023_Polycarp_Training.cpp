// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    long long int n;
    cin>>n;
    long long int a[n];
    long long int days=0;
    long long int x=1;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>=x){
            days++;
            x++;
        }
    }
    cout<<days;
}
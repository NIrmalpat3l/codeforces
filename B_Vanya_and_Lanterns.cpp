// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    // cout<<n<<" "<<l<<endl;
    long double a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    long double dl=a[0]-0;
    long double du=l-a[n-1];
    long double maxa=-1;
    // cout<<dl<<" "<<du<<endl;
    long double d=0;
    for(int i=1;i<n;i++){
        d=(a[i]-a[i-1])/2;
        maxa=max(maxa,d);
    }
    cout<<fixed<<setprecision(10)<<max(maxa,max(du,dl));
}
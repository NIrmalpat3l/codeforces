// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,len=1;
    cin>>n;
    vector<int> v;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            len++;    
        }
        else{
            v.push_back(len);
            len=1;
        }
        v.push_back(len);
    }
    if(n==1) cout<<"1";
    else cout<<*max_element(v.begin(), v.end());
}
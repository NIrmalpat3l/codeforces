#include<bits/stdc++.h>
using namespace std;
void code(){
    int k,n;
    cin>>k>>n;
    int ans=1,c=0;
    vector <int> v;
    for(int i=0;;i++){
        ans+=i;
        if(ans<=n){
            v.push_back(ans);
            c++;
        }else{
            break;
        }
    }
    int an[]={3,5,6,8,9,10,12,13,14,15,17,18,19,20,21,23,24,25,26,27,28,30,31,32,33,34,35,36,38,39,40,41,42,43,44,45,46};
    for(int i=0;i<k-c;i++){
        v.push_back(an[i]);
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<"\n";
    }
}
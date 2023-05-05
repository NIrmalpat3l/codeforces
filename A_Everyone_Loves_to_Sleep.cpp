// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,hb,mb;
    cin>>n>>hb>>mb;
    int tb=(hb*60)+mb;
    int ans=10000;
    for(int i=0;i<n;i++){
        int hc,mc;
        cin>>hc>>mc;
        int tc=hc*60 + mc;
        int time;
        if(tc>=tb){
            time=tc-tb;
            // cout<<time/60<<" "<<time%60;    
        }else{
            time=1440+tc-tb;
            // cout<<time/60<<" "<<time%60;
        }
        ans=min(ans,time);
    }
    cout<<ans/60<<" "<<ans%60;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
        cout<<endl;
    }
}
// int a[n],b[n];
//     for(int i=0;i<n;i++) cin>>a[i]>>b[i];
//     int hc=a[n-1];
//     int mc=b[n-1];
//     int tc=(a[n-1])*60 + b[n-1];
//     int tb=hb*60 + mb;
//     int time=0;
//     if(hc>=hb){
//         time+=tc-tb;
//         cout<<time/60<<" ";
//         if(time%60 < 0){
//             cout<<0;
//         }else{
//             cout<<time%60;
//         }
//     }else{
//         int x=1440-tb;
//         time+=tc+x;
//         cout<<time/60<<" ";
//         if(time%60 < 0){
//             cout<<0;
//         }else{
//             cout<<time%60;
//         }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c1,c2,c3,i1[5000],i2[5000],i3[5000];
    c1=c2=c3=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            i1[c1]=i+1;
            c1++;
        }else if(a[i]==2){
            i2[c2]=i+1;
            c2++;
        }else{
            i3[c3]=i+1;
            c3++;
        }
    }
    int team=min(c1,min(c2,c3));
    cout<<team<<endl;
    for(int i=0;i<team;i++){
        cout<<i1[i]<<" "<<i2[i]<<" "<<i3[i]<<endl;
    }     
    
    return 0;
}
// 
//     for(int i=0;i<team;i++){
//         int d=1;
//         for(int k=0;k<n;k++){
//             if(a[k]==d){
//                 cout<<k+1<<" ";
//                 a[k]=0;
//                 k=0;
//                 d++;
//             }    
//         }
//         cout<<endl;
//     }
// c1=0,c2=0,c3=0;c1<team,c2<team,c3<team;c1++,c2++,c3++
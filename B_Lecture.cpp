// Accepted
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<string>> v(n ,vector<string> (3));
//     for(int i=0;i<m;i++){
//         cin>>v[i][0];
//         cin>>v[i][1];
//         if(v[i][0].length() <= v[i][1].length()){
//             v[i][2]=v[i][0];
//         }else{
//             v[i][2]=v[i][1];
//         }
//     }
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         for(int j=0;j<m;j++){
//             if(s==v[j][0] || s==v[j][1]){
//                 cout<<v[j][2]<<" ";
//             }
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i;
    cin>>n>>m;
    string a[m],b[m];
    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
    }
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int i=0;i<m;i++){
            if(s==a[i]){
                if(s.size()==b[i].size()){
                    cout<<a[i]<<" ";
                }else if(s.size()<b[i].size()){
                    cout<<a[i]<<" ";
                }else if(s.size()>b[i].size()){
                    cout<<b[i]<<" ";
                }
            }
        }
    }
    return 0;
}

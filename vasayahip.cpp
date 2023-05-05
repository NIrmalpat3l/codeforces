#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
        if(a>b) cout<<b<<" ";
        else cout<<a<<" ";
        
        cout<< (int) ((abs(b-a))/2);
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c=1;
//     cin>>a>>b;
//     if((a-b)%10==0){
//         cout<<"1";
//     }else if(a%5==0){
//         cout<<"2";
//     }else{
//         for(int i=1;i>0;i++){
//             if((a-b)%10!=0){
//                 a=a*i;
//                 c++;
//             }else{
//                 break;
//             }
//         }
//         cout<<c;
//     }
//     return 0;
// }

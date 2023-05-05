// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[n];
//     }
//     int a2[3];
//     a2[0]=0,a2[1]=0,a2[2]=0;
//     for(int i=0;i<n;i++){
//         if(i%3==0){
//             a2[0]=a2[0]+a[i];
//         }else if(i%3==1){
//             a2[1]=a2[1]+a[i];
//         }else{
//             a2[2]=a2[2]+a[i];
//         }
//     }
//     cout<<a2[0]<<" "<<a2[1]<<" "<<a2[2]<<" ";
    
//     return 0;
// }
// if (ch > bi && ch > b)
    // {
    //     cout << "chest" << endl;
    // }
    // else if (bi > b && bi > ch)
    // {
    //     cout << "biceps" << endl;
    // }
    // else
    // {
    //     cout << "back" << endl;
    // }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    int ch=0, bi=0, ba=0;
    for (int i = 0; i < n / 3; ++i){
        cin >> a >> b >> c;
        ch += a;
        bi += b;
        ba += c;
    }
    if (n % 3 == 1){
        cin >> a;
        ch += a;
    }else if (n % 3 == 2){
        cin >> a >> b;
        ch += a;
        bi += b;
    }
    (ch>bi) ? ((ch>ba)?(cout<<"chest"<<endl):(cout<<"back"<<endl)) : ((bi>ba)?(cout<<"biceps"<<endl):(cout<<"back"<<endl));
    return 0;
}
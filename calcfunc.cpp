// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     long long int n,s1,s2,c,d,fn;
//     cin>>n;
//     if(n%2==0){
//         c=n/2;
//         d=n/2;
//     }else{
//         c=(int) n/2;
//         d=((int) n/2) + 1;
//     }
//     s1=c*(c+1);
//     s2=d*d;
//     fn=s1-s2;
//     cout<<fn;
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    long long int a, d;
    cin >> a;
    if(a%2 == 0)
    {
        cout << a / 2;
    }
    else
    {
        d = -(a / 2 + 1);
        cout << d;
    }
    return 0;
}
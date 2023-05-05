#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans;
    cin>>n>>k;
    for(int i=1;i<1000;i++)
    {
        if((n*i)%10==k){
            cout<<i;
            break;
        }else if(n%10==5){
            cout<<"2";
            break;
        }else if(n%10==0){
            cout<<"1";
            break;
        }else if((n*i)%10==0){
            cout<<i;
            break;
        }
    }
    return 0;
}

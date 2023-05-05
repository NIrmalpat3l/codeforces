#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,c=0;
        cin>>a;
        for (int i = 1;; i++)
        {
            if (i%3==0||i%10==3){   
                continue;
            }else{   
                c++;
                if(c==a){
                    cout<<i<<endl;
                    break;
                }
            }
            
        }
    }
    return 0;
}
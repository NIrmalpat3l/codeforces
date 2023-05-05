// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n%2){
        cout<<"YES"<<endl;
        vector<long long int>vi(n),vj(n);
        vi[0]=1;
        vj[0]=2;
        for(int i=1;i<n;i++){
            if(i%2){
                vi[i]=vi[i-1]+3;
                vj[i]=vj[i-1]+1;
            }else{
                vi[i]=vi[i-1]+1;
                vj[i]=vj[i-1]+3;
            }
        }
        for(int i=0;i<n;i++){
            cout<<vi[i]<<" ";
        }
        for(int i=0;i<n;i++){
            cout<<vj[i]<<" ";
        }
    }else{
       cout<<"NO";
    }
}
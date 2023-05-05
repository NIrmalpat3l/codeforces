#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,p;
    cin>>n;
    long long int a1[250];
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a1[i];
    }
    long long int q;
    cin>>q;
    for(int i=p;i<p+q;i++){
        cin>>a1[i];
    }
    sort(a1,a1+(p+q));
    int c=0;
    for(int i = 0 ; i < p+q ; i++){
        if(a1[i] != a1[i+1]){
            c++;
        }
    }
 
    if(n == (c)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}

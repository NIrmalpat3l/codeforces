#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,b;
    int a;
    string x;
    cin>>x;
    a=x.length();
    sort(x.begin(),x.end());
    for (int i = 0; i<a; i++){
        if(x[i]!=x[i+1]){ 
            c++;
        }
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
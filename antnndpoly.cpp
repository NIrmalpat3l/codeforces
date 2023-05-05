#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,sides=0;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        cout<<endl;
        if(s == "Tetrahedron") sides+=4;
        else if(s == "Cube") sides+=6;
        else if(s == "Octahedron") sides+=8;
        else if(s == "Dodecahedron") sides+=12;
        else if(s == "Icosahedron") sides+=20;
    }
    cout<<sides;
    return 0; 
}

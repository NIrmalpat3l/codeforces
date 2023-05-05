#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        s.insert(c);
    }
    cout<<s.size();
}
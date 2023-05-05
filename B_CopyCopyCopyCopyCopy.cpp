// Accepted
#include<bits/stdc++.h>
using namespace std;
void code(){
    int n,c=0;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size();
}
int main()
{
    int t;
    cin>>t;
    while(t--){
       code();
       cout<<endl;
    }
    return 0;
}

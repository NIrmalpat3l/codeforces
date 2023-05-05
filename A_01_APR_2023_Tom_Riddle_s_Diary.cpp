// Accepeted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<string>st;
    for(int i=0;i<n;i++){
        int x=st.size();
        string s1;
        cin>>s1;
        st.insert(s1);
        if(x==st.size()){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
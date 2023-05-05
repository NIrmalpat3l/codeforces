// Accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
    map<string,int> m;
    while(n--){
        string s;
        cin>>s;
        m[s]++;
        if (m[s]==1){
    	    cout<<"OK"<<endl;
    	}else{
    		cout<<s<<m[s]-1<<endl;
    	}
	}
}
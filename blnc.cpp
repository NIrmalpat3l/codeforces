#include<bits/stdc++.h>
using namespace std;
void code();
int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
}
void code(){
	int n;
	cin >> n;
    if(n%2==0){
        if((n/2)%2!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    n /= 2;
	cout << "YES" << endl;
    int e_sum,o_sum;
    e_sum=o_sum=0;
    for(int i=1;i<=n;++i){
        e_sum+=i*2;
		cout << i * 2 << " ";
    }
	for(int i=1;i<n;++i){
        o_sum+=i*2-1;
		cout << i * 2 - 1 << " ";
	}
    cout<<e_sum - o_sum<<endl;
}
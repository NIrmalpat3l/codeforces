#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,sides=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,s;
        cin>>a>>b>>c>>s;
        long long int d = s / c;
		d = (d, a);
        if (s - c * d <= b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
    }
    return 0;
}
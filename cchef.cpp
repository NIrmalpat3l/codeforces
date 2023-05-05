#include <iostream>
using namespace std;
void code(){
    int a,b,c,d,x;
    cin>>a>>b>>c>>d;
    for(int i=1;i<1000;i++){
        if((a+i)%b == (c+i)%d){
            cout<<i;
            return;
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    code();
	    cout<<endl;
	}
	return 0;
}

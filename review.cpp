#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int up=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=2){
                up++;
            }
        }
        cout<<up<<endl;
    }
    return 0;
}

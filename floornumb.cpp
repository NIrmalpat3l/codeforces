#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int number,x;
        cin>>number>>x;
        int flr=0,room=0,total=0;
        for(int i=1;;i++){
            if(room>=number){
                cout<<flr<<endl;
                break;
            }
            if(flr==0){
                room+=2;
                flr++;
            }else{
                room+=x;
                flr++;
            }
        }
    }
    return 0;
}
        // if(sum==n){
        //     cnt++;
        //     break;
        // }else if(sum>n){
        //     break;
        // }else{
        //     cnt++;
        // }
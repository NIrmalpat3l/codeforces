#include<iostream>
using namespace std;
int main()
{
    int t,p=0,d=0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a[t][2];
        for(int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
        p=p-(a[i][0])+(a[i][1]);
        //for finding possible capacity of bus
        if(p>d){
            d=p;
        }
    }
    cout<<d<<endl;
    // d=6-p;
    // if(d<0){
    //     cout<<"0";
    // }else{
    //     cout<<d;
    // }
    return 0;
}
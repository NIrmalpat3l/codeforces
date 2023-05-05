#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int arr[4];
        for (int j = 0; j < 4; j++){
            cin >> arr[j];
        }
        int c = 0;
        for (int j = 0; j < 4; j++){
            if (arr[j] > arr[0] ){
                c++;
            }
        }
        cout <<c<< endl;
    }
    return 0;
}
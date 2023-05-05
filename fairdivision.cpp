#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        if(c == 1){
            c1++;
        }else{
            c2++;
        }    
    }
    if((c1 + 2 * c2) % 2 != 0){
        cout << "NO"<<endl;
    }else{
        int sum = (c1 + 2 * c2) / 2;
        if (sum % 2 == 0 || (sum % 2 == 1 && c1 != 0)){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }                    
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
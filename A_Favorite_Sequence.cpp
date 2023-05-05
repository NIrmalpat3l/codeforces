// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            b[i]=arr[i];
        }
        int x;
        int y;
        if (n % 2 == 0)
        {
            x = n / 2;
            y = n - 1;
        }
        else
        {
            x = n / 2 + 1;
            y = n - 1;
        }
        for (int i = 0; i < x; i++)
        {
            arr[2 * i] = b[i];
        }

        for (int i = 0; i < n / 2; i++)
        {
            arr[2 * i + 1] = b[y];
            y--;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
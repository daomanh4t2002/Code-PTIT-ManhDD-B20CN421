#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n+2];
        long long max=0;
        
        for (long long i=0; i<n; i++) {
            cin >> a[i];
            if (max < a[i]) max=a[i];
        }
        
        cout << max << endl;
    }
}

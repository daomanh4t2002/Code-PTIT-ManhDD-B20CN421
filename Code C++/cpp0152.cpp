#include <iostream>
using namespace std;
int gcd(int a, int b) {

  if (b == 0) return a;
  return gcd(b, a % b);
}
int in(int a, int b) {
    if (gcd(b,a)!=1) return -1;
    for (int i = 1; i < b; i++)
    {
        if(a*i % b ==1) return i;
    }
    return -1;
}

int main() {
    int t; cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        cout << in(a,m) << endl;
    }
}

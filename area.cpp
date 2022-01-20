#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    unsigned long long area = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      cin >> a;
      cin >> b;
      area += (unsigned long long) a * b;
    }
    cout << area;
    return 0;
}
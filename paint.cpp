#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, temp, total = 0;
    cin >> n;
    vector <int> raise;

    for (int i = 0; i < n; i++)
    {
      cin >> temp;
      total += temp;
    }
    for (int j = 0; j < n; j++)
    {
      cin >> temp;
      raise.push_back(temp);
    }
    sort(raise.begin(), raise.end(), greater <>());
    for (int k = 0; k < n; k++)
    {
      total += raise[k] * k;
    }
    cout << total;
    return 0;
}
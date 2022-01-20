#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m, ki, temp = 0, result = 0;
    cin >> n;
    cin >> m;
    vector <int> k;

    for (int i = 0; i < m; i++)
    {
      cin >> ki;
      k.push_back(ki);
    }
    sort(k.begin(), k.end());

    for (int j: k)
    {
      temp += j;
      if (temp > n)
      {
        cout << result;
        return 0;
      }
      result += 1;
    }
    cout << result;
    return 0;
}
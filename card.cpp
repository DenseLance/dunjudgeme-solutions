#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, k, temp;
    int top = 0;
    cin >> m >> k;
    string sequence;
    cin >> sequence;
    int arr[m];

    for (int i = 0; i < m; i++)
    {
      arr[i] = i;
    }

    for (char c: sequence)
    {
      if (c == '.')
      {
        break;
      }
      else if (c == 'B')
      {
        temp = arr[top];
        arr[top] = arr[(top + 1) % m];
        arr[(top + 1) % m] = temp;
      }
      top += 1;
      top %= m;
    }
    cout << arr[(top + k - 1) % m] << ' ' << arr[(top + k) % m] << ' ' << arr[(top + k + 1) % m];
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int step_game(int board[], int n, int i, int curr, int global_min) {
  if (i < n)
  {
    for (int j = i; j < n; j++)
    {
      curr += board[j];
      global_min = min(global_min, curr);
      if (curr > 0)
      {
        break;
      }
      if (j == n - 1)
      {
        return global_min;
      }
    }
    return step_game(board, n, i + 1, 0, global_min);
  }
  else
  {
    return global_min;
  }
}

int main() {
    int n, temp;
    cin >> n;
    int board[n];

    for (int i = 0; i < n; i++)
    {
      cin >> temp;
      board[i] = temp;
    }
    cout << step_game(board, n, 0, 0, INT_MAX);
    return 0;
}
#include<bits/stdc++.h> 
using namespace std; 

// Minimum coin change problem: https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/ 
int min_coins(int coins[], int n, int v) 
{
    int vals[v + 1]; 
  
    // Base case
    vals[0] = 0; 
  
    for (int i = 1; i <= v; i++) 
        vals[i] = INT_MAX; 
  
    for (int i = 1; i <= v; i++) 
    { 
        // Go through all coins smaller than i 
        for (int j = 0; j < n; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = vals[i - coins[j]]; 
              if (sub_res != INT_MAX and sub_res + 1 < vals[i]) 
                  vals[i] = sub_res + 1; 
          } 
    } 
    return vals[v];
}

int main() {
  int n, v, temp;
  cin >> n >> v;
	int coins[n];
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    coins[i] = temp;
  }

  temp = min_coins(coins, n, v);
  if (temp == INT_MAX)
  {
    cout << -1;
  }
  else
  {
    cout << temp;
  }
	return 0; 
}
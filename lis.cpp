#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, temp;
    cin >> n;
    int arr[n];
    vector <int> compare;
    vector <vector<int>> result;

    for (int i = 0; i < n; i++)
    {
      cin >> temp;
      arr[i] = temp;
    }
    
    compare.push_back(arr[0]);
    result.push_back(compare);
    for (int i = 1; i < n; i++) // loop through array
    {
      temp = 0;
      compare.clear();
      for (int j = 0; j < result.size(); j++)
      {
        if (arr[i] > result[j].back()) // larger than last element
        {
          temp += 1;
        }
      }
      if (temp == 0) // start new active vector
      {
        compare.push_back(arr[i]);
        result.at(temp) = compare;
      }
      else if (temp == result.size()) // clone, extend
      {
        compare = result.back();
        compare.push_back(arr[i]);
        result.push_back(compare);
      }
      else // clone, extend, discard
      {
        compare = result[temp - 1];
        compare.push_back(arr[i]);
        result.at(temp) = compare;
      }
    }
    
    cout << result.back().size();
    return 0;
}
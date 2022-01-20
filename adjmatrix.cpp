#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n, d, temp, coor;
    cin >> n;
    cin >> d;
    vector <int> vec;
    string str;
    string ori;
    
    for (int i = 0; i < d; i++)
    {
      cin >> temp;
      coor = temp * 100;
      cin >> temp;
      coor += temp;
      vec.push_back(coor);
      temp = coor % 100;
      coor = temp * 100 + coor / 100;
      vec.push_back(coor); // bidirectional
    }
    
    for (int j = 0; j < n; j++)
    {
      ori.push_back('0');
    }
    //cout << ori << endl;
    for (int k = 1; k <= n; k++)
    {
      str += ori;
      for (int x: vec)
      {
        if (k == x / 100)
        {
          str.at(x % 100 - 1) = '1';
        }
      }
      cout << str << endl;
      str.clear();
    }
    return 0;
}
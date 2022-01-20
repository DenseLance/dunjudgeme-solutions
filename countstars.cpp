#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int h, w, result = 0;
    cin >> h;
    cin >> w;
    string str;

    for (int i = 0; i < h; i++)
    {
      if (i == 0)
      {
        cin.ignore();
      }
      getline(cin, str);
      for (int j = 0; j < w; j++)
      {
        if (str.at(j) == '*')
        {
          result += 1;
        }
      }
      str = "";
    }
    cout << result;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> locate_adj(int r, int c, int ri, int ci, vector <vector<char>> result, vector <vector<int>> all_adj) {
    if (ri != 0 and result[ri - 1][ci] == 'H')
    {
      all_adj.push_back({ri - 1, ci});
      result[ri - 1][ci] = '.';
      all_adj = locate_adj(r, c, ri - 1, ci, result, all_adj);
    }
    if (r - 1 != ri and result[ri + 1][ci] == 'H')
    {
      all_adj.push_back({ri + 1, ci});
      result[ri + 1][ci] = '.';
      all_adj = locate_adj(r, c, ri + 1, ci, result, all_adj);
    }
    if (ci != 0 and result[ri][ci - 1] == 'H')
    {
      all_adj.push_back({ri, ci - 1});
      result[ri][ci - 1] = '.';
      all_adj = locate_adj(r, c, ri , ci - 1, result, all_adj);
    }
    if (c - 1 != ci and result[ri][ci + 1] == 'H')
    {
      all_adj.push_back({ri, ci + 1});
      result[ri][ci + 1] = '.';
      all_adj = locate_adj(r, c, ri , ci + 1, result, all_adj);
    }
    
    return all_adj;
}

int main() {
    int r, c, n = 0;
    cin >> r >> c;
    string str;
    vector <char> temp;
    vector <vector<char>> result;
    vector <vector<int>> all_adj;

    for (int i = 0; i < r; i++)
    {
      cin >> str;
      for (char c: str)
      {
        temp.push_back(c);
      }
      result.push_back(temp);
      temp.clear();
    }

    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        if (result[i][j] == 'H')
        {
          n += 1;
          all_adj = locate_adj(r, c, i, j, result, {{i, j}});
          for (vector<int> x: all_adj)
          {
            result[x[0]][x[1]] = '.';
          }
        }
      }
    }
    cout << "Oh, bother. There are " << n << " pools of hunny.";
    return 0;
}
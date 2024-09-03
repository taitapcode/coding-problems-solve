// https://www.hackerrank.com/challenges/magic-square-forming/problem
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int bestMatrix[8][3][3] = {
  {{8, 3, 4},
    {1, 5, 9},
    {6, 7, 2}},

  {{6, 7, 2},
    {1, 5, 9},
    {8, 3, 4}},

  {{4, 3, 8},
    {9, 5, 1},
    {2, 7, 6}},

  {{2, 7, 6},
    {9, 5, 1},
    {4, 3, 8}},

  {{8, 1, 6},
    {3, 5, 7},
    {4, 9, 2}},

  {{6, 1, 8},
    {7, 5, 3},
    {2, 9, 4}},

  {{4, 9, 2},
    {3, 5, 7},
    {8, 1, 6}},

  {{2, 9, 4},
    {7, 5, 3},
    {6, 1, 8}}
};


int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int m[3][3];
  for(auto &r: m)
    for(int &x: r) cin >> x;

  int ans = INT_MAX;
  for(auto a: bestMatrix)
  {
    int c = 0;

    for(int i = 0; i < 3; i++)
      for(int j = 0; j < 3; j++) c += abs(a[i][j] - m[i][j]);
    ans = min(ans, c);
  }

  cout << ans;

  return 0;
}

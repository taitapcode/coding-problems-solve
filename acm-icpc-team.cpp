// Problem: https://www.hackerrank.com/challenges/acm-icpc-team/problem
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;

  char a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];

  int maxT = 0, cnt = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
    {
      int currCnt = 0;
      for (int k = 0; k < m; k++)
        if (a[i][k] == '1' || a[j][k] == '1') currCnt++;

      if (currCnt == maxT) cnt++;
      else if (currCnt > maxT)
      {
        maxT = currCnt;
        cnt = 1;
      }
    }

  cout << maxT << el << cnt;
  return 0;
}

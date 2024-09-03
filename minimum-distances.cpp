// https://www.hackerrank.com/challenges/minimum-distances/problem
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, a, ans = INT_MAX;
  cin >> n;

  map<int, int> mp;
  for (int i = 1; i <= n; i++) 
  {
    cin >> a;
    if (mp[a]) ans = min(ans, i - mp[a]);
    mp[a] = i;
  }

  if (ans == INT_MAX) cout << -1;
  else cout << ans;

  return 0;
}

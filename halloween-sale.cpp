#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int p, d, m, s;
  cin >> p >> d >> m >> s;

  int ans = 0;
  while (s >= p)
  {
    ans++;
    s -= p;
    p -= d;
    if (p < m) p = m;
  }

  cout << ans;

  return 0;
}

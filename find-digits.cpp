// https://www.hackerrank.com/challenges/find-digits/problem
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

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int tmp = n, a, ans = 0;
    while (tmp > 0)
    {
      a = tmp % 10;
      if (a && n % a == 0) ans++;
      tmp /= 10;
    }

    cout << ans << el;
  }

  return 0;
}

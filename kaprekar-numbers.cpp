// https://www.hackerrank.com/challenges/kaprekar-numbers/problem
#include <bits/stdc++.h>
#include <string>
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

  ll p, q;
  bool isOut = 0;
  cin >> p >> q;

  while (p <= q)
  {
    string a = to_string(p * p);
    int l, r, s, len = a.size();
    l = r = s = 0;

    for (int i = 0; i < len; i++)
    {
      if (i < len / 2) l = l * 10 + (a[i] - '0');
      else r = r * 10 + (a[i] - '0');
    }

    if (l + r == p)
    {
      cout << p << ' ';
      isOut = 1;
    }

    p++;
  }

  if (!isOut) cout << "INVALID RANGE";

  return 0;
}

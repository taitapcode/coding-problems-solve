// Problem: https://www.hackerrank.com/challenges/taum-and-bday/problem
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

ll solve() 
{
  ll b, w, bc, wc, z;
  cin >> b >> w >> bc >> wc >> z;

  if (bc < wc) 
  {
    swap(bc, wc);
    swap(b, w);
  }

  if (bc > wc + z) return (b + w) * wc + z * b;
  return b * bc + w * wc;
}

int main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) cout << solve() << el;

  return 0;
}

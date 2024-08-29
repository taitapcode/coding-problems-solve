// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
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

  int n;
  cin >> n;

  int a[n];
  for (int &x : a)
    cin >> x;

  int l, m, cl, cm;
  l = m = a[0];
  cl = cm = 0;

  for (int i = 1; i < n; i++)
    if (a[i] > m) {
      m = a[i];
      cm++;
    } else if (a[i] < l) {
      l = a[i];
      cl++;
    }

  cout << cm << ' ' << cl;

  return 0;
}

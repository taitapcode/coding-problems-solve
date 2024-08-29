// https://www.hackerrank.com/challenges/strange-code/problem
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

  ll n;
  cin >> n;

  ll c = 1, v = 3;

  while (c + v <= n) {
    c = c + v;
    v *= 2;
  }

  cout << v - n + c;

  return 0;
}

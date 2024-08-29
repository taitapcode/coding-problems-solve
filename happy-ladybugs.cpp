// https://www.hackerrank.com/challenges/happy-ladybugs/problem
#include <bits/stdc++.h>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

bool solve() {
  int n;
  string str;
  cin >> n >> str;

  if (n == 1) {
    if (str == "_")
      return 1;
    else
      return 0;
  }

  vector<int> m(255, 0);
  for (char ch : str)
    m[ch]++;

  if (m['_']) {
    for (char i = 'A'; i <= 'Z'; i++)
      if (m[i] == 1)
        return 0;

    return 1;
  }

  str += ' ';
  for (int i = 1; i < n; i++)
    if (str[i] != str[i - 1] && str[i] != str[i + 1])
      return 0;

  return 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--)
    cout << (solve() ? "YES" : "NO") << el;

  return 0;
}

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
  int a;
  cin >> a;
  string s = to_string(a);
  int ans = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') ans++;
  }
  cout << ans << endl;
}

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int res = 0;
  for (int i = 0; i < n; i++) {
    string s = to_string(i);
    int sum = 0;
    for (size_t j = 0; j < s.length(); j++) {
      sum += int(s[j] - '0');
    }
    if (a <= sum && sum <= b) {
      res += sum;
    }
  }
  cout << res << endl;
  return 0;
}

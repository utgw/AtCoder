#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  int ans = 0;
  vector<int> a(count);
  for (int i = 0; i < count; i++) {
    cin >> a[i];
  }
  int res = 0;
  while (true) {
    for (int i = 0; i < count; i++) {
      if (a[i] % 2 == 0) {
        a[i] /= 2;
      } else {
        cout << res << endl;
        return 0;
      }
    }
    res++;
  }
}

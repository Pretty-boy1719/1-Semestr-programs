#include <algorithm>
#include <cmath>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <vector>

typedef long long ll;
typedef long double ld;

int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);

  int t = 0;
  std::cin >> t;
  while (t > 0) {
    int a = 0, b = 0;
    std::string s;
    std::cin >> a >> b >> s;

    std::swap(a, b);
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
      if (s[i] == '?' && s[n - i - 1] != '?') {
        if (s[n - i - 1] == '1') {
          a -= 2;
          s[i] = '1';
        } else {
          b -= 2;
          s[i] = '0';
        }
      } else if (s[i] != '?' && s[n - i - 1] == '?') {
        if (s[i] == '1') {
          a -= 2;
          s[n - i - 1] = '1';
        } else {
          b -= 2;
          s[n - i - 1] = '0';
        }
      } else {
        if (s[i] == '1') {
          a -= 1;
        } else if (s[i] == '0') {
          b -= 1;
        }
        if (s[n - i - 1] == '1') {
          a -= 1;
        } else if (s[n - i - 1] == '0') {
          b -= 1;
        }
      }
    }

    if (n % 2 == 1 && s[n / 2] == '1') {
      a -= 1;
    } else if (n % 2 == 1 && s[n / 2] == '0') {
      b -= 1;
    } else if (n % 2 == 1 && s[n / 2] == '?') {
      if (a % 2 == 1) {
        s[n / 2] = '1';
        a -= 1;
      } else {
        b -= 1;
        s[n / 2] = '0';
      }
    }
    bool fl = 1;
    for (int i = 0; i + i <= n; ++i) {

      if (s[i] == s[n - i - 1] && s[i] == '?') {
        if (a > 1) {
          s[i] = '1';
          s[n - i - 1] = '1';
          a -= 2;
        } else {
          s[i] = '0';
          s[n - i - 1] = '0';
          b -= 2;
        }
      } else if (s[i] != s[n - i - 1]) {
        fl = 0;
        break;
      }
    }
    if (fl && a == 0 && b == 0) {
      std::cout << s;
    } else {
      std::cout << -1;
    }
    std::cout <<std:: endl;

    t -= 1;
  }
}

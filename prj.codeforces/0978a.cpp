// 2026 by Polevoy Dmitry
// source https://codeforces.com/problemset/problem/978/A

#include <iostream>
#include <vector>
 
int main() {
  int n = 0;
  std::cin >> n;
  std::vector<int> a(n, 0);
  for (int i = 0; i < n; i += 1) {
    std::cin >> a[i];
  }
  std::vector<int> unique;
  unique.reserve(n);
  unique.push_back(a[n - 1]);
  for (int i = n - 2; 0 <= i; i -= 1) {
    int i_u = 0;
    for (; i_u < std::ssize(unique); i_u += 1) {
      if (a[i] == unique[i_u]) {
        break;
      }
    }
    if (i_u == std::ssize(unique)) {
      unique.push_back(a[i]);
    }
  }
  std::cout << std::ssize(unique) << '\n';
  for (int i = std::ssize(unique) - 1; 0 <= i; i -= 1) {
      std::cout << unique[i] << ' ';
  }
  return 0;
}
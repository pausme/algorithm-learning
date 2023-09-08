// UVa1649 Binomial coeﬃcients
// 陈锋
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> LPair;

// bool is_debug() { return getenv("DBG"); }
LL gcd(LL a, LL b) { return b == 0 ? a : gcd(b, a % b); }
int binomial_cmp(LL n, LL k, LL m) {  // C(n, k)<M:-1, =0:0, >0:1
  LL C = 1;
  for (int i = 1; i <= k; i++) { // C *= (n-i+1)/i;
    LL g = gcd(n - i + 1, i), b = (n - i + 1) / g;
    C /= (i / g);
    if (C > LONG_MAX / b) return 1;  // 提前判断溢出
    C *= b;
    if (C > m) return 1;
  }
  if (C == m) return 0;  // assert(C < m);
  return -1;
}

void solve(LL M, map<LL, set<LL>>& ans, int& sz) {
  ans.clear();
  sz = 0;
  if (M == 2) {
    ans[2].insert(1), sz = 1;
    return;
  }
  int k = 2;
  while (true) {
    LL L = 2 * k, R = M, n = 0;
    // if (is_debug()) printf("L:%lld, R:%lld, k:%d\n", L, R, k);
    if (binomial_cmp(L, k, M) > 0) break;
    while (L < R && !n) {  // C(L,k) <= M < C(R,k)
      LL mid = L + (R - L) / 2;
      int cmp = binomial_cmp(mid, k, M);
      // if (is_debug()) printf("L:%lld, R:%lld, k:%d, mid:%lld, cmp:%d,\n", L, R, k, mid, cmp);
      if (cmp == 0)
        n = mid;
      else if (cmp < 0)
        L = mid + 1;
      else if (cmp > 0)
        R = mid;
    }
    if (n) ans[n].insert(k), ans[n].insert(n - k);
    k++;
  }
  ans[M].insert(1), ans[M].insert(M - 1);
  for (const auto& p : ans) sz += p.second.size();
}

int main() {
  int T;
  scanf("%d\n", &T);
  LL M;
  map<LL, set<LL>> ans;
  while (scanf("%lld\n", &M) == 1) {
    int sz = 0;
    solve(M, ans, sz);
    printf("%d\n", sz);
    bool first = true;
    for (const auto& np : ans) {
      for (auto k : np.second) {
        if (first)
          first = false;
        else
          printf(" ");
        printf("(%lld,%lld)", np.first, k);
      }
    }
    puts("");
  }
  return 0;
}
// 19804943 1649  Binomial coefficients Accepted  C++11 0.010 2017-08-05 02:28:21
/*
  题解注意: 二项式系数，溢出检测方法，C(n,k)比较方法
*/
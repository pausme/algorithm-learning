//
// Created by zx208 on 2023/6/1.
//
//https://leetcode.cn/problems/unique-binary-search-trees/

/*
 * 假设 f[i] 表示为“根节点值为 i，可以组成不同二叉搜索树的种数”，那么：
 * f[i] = dp[i - 1] * dp[n - i]（公式 1）
 * 那么对于构造总共有 n 个节点的二叉搜索树来说，它等于“根节点为 1 可以组成的种数 + 根节点为 2 可
 * 以组成的种数 + ... + 根节点为 n 可以组成的种数”，即：
 * dp[n] = f[1] + f[2] + ... + f[i] + ... + f[n] （公式 2）
 * 结合公式 1 和公式 2：
 * dp[n] = dp[0] * dp[n - 1] + dp[1] * dp[n - 2] + ... + dp[i - 1] * dp[n - i] + ... + dp[n - 1] * dp[0]。
 * 其实就是 dp[i - 1] * dp[n - i] 从 [1, n] 的求和，即本题的状态转移方程。
 */

#include <bits/stdc++.h>
using namespace std;
const int N = 30;
int dp[N];

int main(){
    int num;
    cin >> num;
    memset(dp, 0, sizeof dp);
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i] += dp[j-1] * dp[i-j];
        }
    }
    cout << dp[num];
    return 0;
}
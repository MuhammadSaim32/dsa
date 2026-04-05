#include <iostream>
#include <vector>
using namespace std;
/*top down approach */
int topdowndp(int n, vector<int> &dp) {
  if (n == 1 || n == 0) {
    return n;
  }

  if (dp[n] != -1) {
    return dp[n];
  }

  dp[n] = topdowndp(n - 1, dp) + topdowndp(n - 2, dp);
  return dp[n];
}

// bottomupdp approach tabulation

int bottomupdp(int n, vector<int> dp) {

  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}

int bottomupdpwithspaceoptimization(int n) {

  int prev1 = 1;
  int prev2 = 0;
  for (int i = 2; i <= n; i++) {
    int curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
  }
  return prev1;
}

int main() {
  vector<int> dp(7, -1);
  /*cout << topdowndp(6, dp);*/
  /*cout << bottomupdp(6, dp);*/
  cout << bottomupdpwithspaceoptimization(10);
  return 0;
}

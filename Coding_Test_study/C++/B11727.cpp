#include <iostream>
using namespace std;
int n;
int dp[1000];

int main() {
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
    cout << dp[n];
}
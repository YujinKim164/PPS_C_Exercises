#include <algorithm>
#include <iostream>

using namespace std;
int dp[100001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	dp[1] = 1, dp[2] = 1, dp[3] = 2, dp[4] = 2, dp[5] = 1, dp[6] = 2, dp[7] = 1;
	
	for (int i = 8; i <= n; i++) {
		if (i % 7 == 0) dp[i] = i / 7;
		else dp[i] = min({ dp[i - 7],dp[i - 5],dp[i - 2],dp[i - 1] }) + 1;
	}
	cout << dp[n];
}
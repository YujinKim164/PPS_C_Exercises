#include <stdio.h>
 
int main() {
    int dp[11] = { 0 };
    
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
 
    for (int i = 4; i < 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
 
    int T, n;
    scanf("%d", &T);
 
    for (int test_case = 0; test_case < T; test_case++) {
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
 
    return 0;
}
#include <iostream>
#define MOD 1000000009
using namespace std;

long dp[31][31];

int main(void)
{
    for (int h = 0; h <= 30; h++) {
            for (int w = 0; w <= 30; w++) {
                if (h > w) continue;
                if (h == 0) dp[w][h] = 1;
                else dp[w][h] = dp[w - 1][h] + dp[w][h - 1];
            }
        }
        int n;
    while (1) {
        cin >> n;
        if (n == 0)break;
        cout << dp[n][n] << "\n";
    }
}

#include <iostream>
using namespace std;

int dp[41][2];

void init()
{
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
}


void fibo(int x)
{
	if (dp[x][0] != 0 || dp[x][1] != 0) return;
	
	if (dp[x - 1][0] == 0 && dp[x - 1][1] == 0) fibo(x - 1);

	dp[x][0] = dp[x - 1][0] + dp[x - 2][0];
	dp[x][1] = dp[x - 1][1] + dp[x - 2][1];
	
}

int main(void)
{
	init();
	
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		fibo(n);
		cout << dp[n][0] << " " << dp[n][1]<<endl;
	}

	return 0;
	
}
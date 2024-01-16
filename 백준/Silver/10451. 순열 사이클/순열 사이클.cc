#include <iostream>
#include <vector>
using namespace std;
int adj[1001][1001];
int visited[1001];
int cnt;
int n;
void dfs(int start) {
    visited[start] = 1;
    for (int i = 1; i <= n; i++) {
        if (adj[start][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}
int main() {
    int c;
    cin >> c;
    for (int t = 0; t < c; t++) {
        cin >> n;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                adj[i][j] = 0;
                visited[i] = 0;
            }
        }
        cnt = 0;

        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            adj[i][a] = 1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (visited[i] == 0 && adj[i][j] == 1) {
                    cnt++;
                    visited[i] = 1;
                    dfs(j);
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
#include<vector>
#include<queue>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int solution(vector<vector<int> > maps)
{
    int n = maps.size(), m = maps[0].size();
    vector<vector<int>> dist(n, vector<int>(m, 0));
    queue<pair<int,int>> q;
    
    dist[0][0] = 1;
    q.push({0, 0});
    
    
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++){
            int nx= x + dx[i], ny= y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny>=m) continue;
            if (maps[nx][ny] == 0) continue; 
            if(dist[nx][ny] !=0 ) continue;
            
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }
    if(dist[n-1][m-1] == 0) return -1;
    else return dist[n-1][m-1];
}
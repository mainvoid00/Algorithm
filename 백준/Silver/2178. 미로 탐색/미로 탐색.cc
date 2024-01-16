#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;
char adj[101][101];
//vector< vector<int> > adj(101,vector<int>(101,0));
vector< vector<int> > visited(101,vector<int>(101,0));
queue< pair<int,int> > q;
int y[]={1,-1,0,0};
int x[]={0,0,-1,1};
int n,m;
void bfs()
{
    q.push(make_pair(0,0));
    visited[0][0]=1;
    while(!q.empty()){
        pair<int,int> cur=q.front();
        int curvisited=visited[cur.first][cur.second];
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x[i]+cur.second;
            int ny=y[i]+cur.first;
            if(nx>=0&&nx<m){
                if(ny>=0&&ny<n){
                    if(visited[ny][nx]==0&&adj[ny][nx]=='1'){
                        q.push(make_pair(ny,nx));
                        visited[ny][nx]=curvisited+1;
                    }
                }
            }
        }
    }

}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>adj[i];
    }
    bfs();
    cout<<visited[n-1][m-1];
    return 0;
}

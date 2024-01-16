#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
vector< vector<int> >adj(51,vector<int>(51,0));
vector< vector<int> >visited(51,vector<int>(51,0));
queue< pair<int,int> > q;
int x[]={-1,1,0,0,-1,1,-1,1};
int y[]={0,0,1,-1,1,1,-1,-1};
int n,m;
int cnt;
void bfs()
{
    while(!q.empty()){
        pair<int,int> cur=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int nx=cur.second+x[i];
            int ny=cur.first+y[i];
            if(nx>=0&&nx<m){
                if(ny>=0&&ny<n){
                    if(adj[ny][nx]==1&&visited[ny][nx]==0){
                        visited[ny][nx]=1;
                        q.push(make_pair(ny,nx));
                    }
                }
            }
        }
    }
}

int main()
{
    while(1){
    cin>>m>>n;
    if(m==0&&n==0) break;
    adj=vector< vector<int> >(51,vector<int>(51,0));
    visited=vector< vector<int> >(51,vector<int>(51,0));
    cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>adj[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(adj[i][j]==1&&visited[i][j]==0){
                    q.push(make_pair(i,j));
                    visited[i][j]=1;
                    cnt++;
                    bfs();
                }
            }
        }
        cout<<cnt<<" ";
}
return 0;
}

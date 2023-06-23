#include <utility>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;
vector<int> res;
vector< vector<int> > adj(51,vector<int>(51,0));
vector< vector<int> > visited(51,vector<int>(51,0));
queue< pair<int,int> > q;
int n,m,k;
int cnt=0;
int x[]={-1,1,0,0};
int y[]={0,0,1,-1};
void bfs()
{
    while(!q.empty()){
        pair<int,int> cur=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.second+x[i];
            int ny=cur.first+y[i];
            if(nx>=0&&nx<m){
                if(ny>=0&&ny<n){
                    if(visited[ny][nx]==0&&adj[ny][nx]==1){
                        q.push(make_pair(ny,nx));
                        visited[ny][nx]=1;
                    }
                }
            }
        }

    }
}
int main()
{
    int c;
    cin>>c;
    for(int l=0;l<c;l++){

        adj=vector< vector<int> >(51,vector<int>(51,0));
        visited=vector< vector<int> >(51,vector<int>(51,0));
        cnt=0;
        cin>>m>>n>>k;

        for(int i=0;i<k;i++){
            int a,b;
            cin>>a>>b;
            adj[b][a]=1;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(adj[i][j]==1&&visited[i][j]==0){
                    visited[i][j]=1;
                    q.push(make_pair(i,j));
                    cnt++;
                    bfs();
                }
            }
        }
        res.push_back(cnt);
    }
    for(vector<int>::size_type i = 0; i < res.size(); ++i){
        cout<<res[i]<<"\n";
    }
}

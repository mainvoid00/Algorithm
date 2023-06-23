#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;
vector< vector<int> >adj(1001,vector<int>(1001,0));
vector< vector<int> >visited(1001,vector<int>(1001,0));
queue< pair<int,int> > q1;
queue< pair<int,int> > q2;
int x[]={0,0,-1,1};
int y[]={1,-1,0,0};
int n,m;
int cnt;
bool sw=0;
void bfs1()
{
    while(!q1.empty()){
        pair<int,int> cur=q1.front();
        q1.pop();
        for(int i=0;i<4;i++){
            int nx=cur.second+x[i];
            int ny=cur.first+y[i];
            if(nx>=0&&nx<m){
                if(ny>=0&&ny<n){
                    if(adj[ny][nx]==0&&visited[ny][nx]==0){
                        visited[ny][nx]=1;
                        q2.push(make_pair(ny,nx));
                    }
                }
            }
        }
    }
}
void bfs2()
{
    while(!q2.empty()){
        pair<int,int> cur=q2.front();
        q2.pop();
        for(int i=0;i<4;i++){
            int nx=cur.second+x[i];
            int ny=cur.first+y[i];
            if(nx>=0&&nx<m){
                if(ny>=0&&ny<n){
                    if(adj[ny][nx]==0&&visited[ny][nx]==0){
                        visited[ny][nx]=1;
                        q1.push(make_pair(ny,nx));
                    }
                }
            }
        }
    }

}
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>adj[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(adj[i][j]==1){
              q1.push(make_pair(i,j));
              visited[i][j]=1;
            }
        }
    }
    while(!q1.empty()||!q2.empty()){
        if(sw==0) bfs1();
        else bfs2();
        cnt++;
        if(sw==0) sw=1;
        else sw=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(adj[i][j]==0&&visited[i][j]==0){
                cout<<"-1";
                return 0;
            }
        }
    }
    cout<<cnt-1;
    return 0;
}

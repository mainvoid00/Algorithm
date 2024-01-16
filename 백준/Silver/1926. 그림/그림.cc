#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
pair<int,int> cur;
queue< pair<int,int> > q;
vector< vector<int> > visited(501,vector<int>(501,0));
vector< vector<int> > adj(501,vector<int>(501,0));
static const int x[] = {0,0,-1,1};
static const int y[] = {-1,1,0,0};
//vector<int>y(arry, arry + sizeof(arry) / sizeof(arry[0]) );
//vector<int>x(arrx, arrx + sizeof(arrx) / sizeof(arrx[0]) );
int cnt;
int maxbfs;
int cntmax;
int n,m;
void bfs()
{
    while(!q.empty()){
        cur=q.front();
        q.pop();
        cntmax++;
        for(int i=0;i<4;i++){
            int nx=cur.first+x[i];
            int ny=cur.second+y[i];
            if(nx>=0&&nx<n){
                if(ny>=0&&ny<m){
                    if(visited[nx][ny]==0&&adj[nx][ny]==1){
                        q.push(make_pair(nx,ny));
                        visited[nx][ny]=1;
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
        for(int j=0;j<m;j++){
            cin>>adj[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j]&&adj[i][j]){
                visited[i][j]=1;
                q.push(make_pair(i,j));
                cnt++;
                cntmax=0;
                bfs();
                if(cntmax>maxbfs) maxbfs=cntmax;
            }

        }
    }
    cout<<cnt<<endl<<maxbfs;
    return 0;
}

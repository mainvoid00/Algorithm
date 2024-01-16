#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
queue< pair<int,int> > q;
char adj[26][26];
//vector< vector<char> >adj(26,vector<char>(26,0));
vector< vector<int> >visited(26,vector<int>(26,0));
vector<int> res;
int x[]={0,0,-1,1};
int y[]={1,-1,0,0};
int cnt;
int dncnt;
int n;
void bfs()
{
    while(!q.empty()){
        pair<int,int> cur=q.front();
        q.pop();
        dncnt++;
        for(int i=0;i<4;i++){
            int nx=cur.second+x[i];
            int ny=cur.first+y[i];
            if(nx>=0&&nx<n){
                if(ny>=0&&ny<n){
                    if(visited[ny][nx]==0&&adj[ny][nx]=='1'){
                        visited[ny][nx]=1;
                        q.push(make_pair(ny,nx));
                    }
                }
            }
        }
    }
    res.push_back(dncnt);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>adj[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]=='1'&&visited[i][j]==0){
                visited[i][j]=1;
                cnt++;
                q.push(make_pair(i,j));
                dncnt=0;
                bfs();
            }
        }
    }
    sort(res.begin(),res.end());
    cout<<cnt<<"\n";
    for (vector<int>::size_type i = 0; i < res.size(); ++i){
        cout<<res[i]<<"\n";
    }
    return 0;
}

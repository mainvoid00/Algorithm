#include <string>
#include <vector>
#include <queue>
using namespace std;

bool canChange(const string& a, const string& b)
{
    int diff =0;
    for(int i=0;i< a.size(); i++)
        if(a[i] != b[i]) diff++;
    return diff==1;
}


int solution(string begin, string target, vector<string> words) {
    int cnt = 0;
    int n= words.size();
    vector<bool> visited(n, false);
    queue<pair<string, int>> q;
    q.push({begin, 0});
    
    while(!q.empty()){
        string cur = q.front().first;
        int cnt = q.front().second;
        q.pop();
        
        if(cur == target) return cnt;
        
        for(int i=0; i< n; i++){
            if(visited[i]) continue;
            if(!canChange(cur, words[i])) continue;
            visited[i] = true;
            q.push({words[i], cnt + 1});
        }
    }
    return 0;
}
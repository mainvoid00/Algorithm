#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int n = progresses.size();
    int idx = 0;                        

    while (idx < n) {
        for (int i = idx; i < n; i++)   
            progresses[i] += speeds[i];

        int cnt = 0;
        while (idx < n && progresses[idx] >= 100) {   
            idx++;
            cnt++;
        }
        if (cnt > 0) answer.push_back(cnt);
    }
    return answer;
}
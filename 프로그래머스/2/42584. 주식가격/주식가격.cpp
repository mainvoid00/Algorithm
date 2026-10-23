#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n);
    stack<int> st;  // 아직 가격이 떨어지지 않은 시점의 인덱스

    for (int i = 0; i < n; i++) {
        while (!st.empty() && prices[st.top()] > prices[i]) {
            answer[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        answer[st.top()] = n - 1 - st.top();
        st.pop();
    }
    return answer;
}
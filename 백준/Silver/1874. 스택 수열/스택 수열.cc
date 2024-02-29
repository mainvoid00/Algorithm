#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i)
        cin >> sequence[i];

    vector<char> result;
    stack<int> st;
    int index = 0;

    for (int i = 1; i <= n; ++i) {
        st.push(i);
        result.push_back('+');
        while (!st.empty() && st.top() == sequence[index]) {
            st.pop();
            result.push_back('-');
            ++index;
        }
    }

    if (!st.empty())
        cout << "NO";
    else
        for (char c : result)
            cout << c << '\n';

    return 0;
}

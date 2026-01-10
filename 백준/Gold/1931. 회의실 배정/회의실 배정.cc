#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 회의 정보를 담을 구조체
struct Meeting {
    int start;
    int end;
};

// 정렬 기준 함수 (이 문제의 핵심)
bool compare(Meeting a, Meeting b) {
    if (a.end == b.end) {
        return a.start < b.start; // 끝나는 시간이 같으면 시작 시간 빠른 순
    }
    return a.end < b.end; // 끝나는 시간 빠른 순
}

int main() {
    // C++ 입출력 속도 향상 (시간 초과 방지 팁)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<Meeting> meetings(N);

    for (int i = 0; i < N; i++) {
        cin >> meetings[i].start >> meetings[i].end;
    }

    // 1. O(N log N) 정렬 수행
    sort(meetings.begin(), meetings.end(), compare);

    int count = 0;
    int last_end_time = 0;

    // 2. 그리디 탐색 O(N)
    for (int i = 0; i < N; i++) {
        // 이전 회의 끝나는 시간보다 현재 회의 시작 시간이 같거나 뒤라면 선택
        if (meetings[i].start >= last_end_time) {
            last_end_time = meetings[i].end; // 회의 진행, 끝나는 시간 갱신
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}

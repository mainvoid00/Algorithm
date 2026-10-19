#include <iostream>
#include <vector>
using namespace std;


int solution(string A, string B) {

    int len = A.length();
    for (int i=0; i<len; i++) {
        if (A == B) return i;
        char temp = A[len-1];
        A.pop_back();
        A.insert(A.begin(), temp);
    }
    return -1;
}

int main(void)
{
    string A, B;

    cin >> A >> B;
    cout << solution(A, B) << endl;
    return 0;


}
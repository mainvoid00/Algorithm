#include <iostream>

using namespace std;
int main(void)
{
    int n;
    cin >> n;

    string result = "int";
    for (int i = 0; i < n / 4; i++) {
        cout << "long ";
    }

    cout << result;

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

const int MX = 10000007;
int dat[MX];
int pos; // 알아서 0으로 초기화 됨

void push(int val){
  dat[pos++] = val; // step 1, 2
}

void pop(){
  pos--;
}

int top(){
  return dat[pos-1];
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--){ // n번 반복
    string c;
    cin >> c;
    if(c=="push"){
      int t;
      cin >> t;
      push(t);
    }
    else if(c=="pop"){
      if(pos == 0) cout << -1 << '\n';
      else{
        cout << top() << '\n';
        pop();
      }
    }
    else if(c=="size")
      cout << pos << '\n';
    else if(c=="empty")
      cout << (int)(pos == 0) << '\n';
    else{ // top
      if(pos == 0) cout << -1 << '\n';
      else cout << top() << '\n';
    }
  }
}

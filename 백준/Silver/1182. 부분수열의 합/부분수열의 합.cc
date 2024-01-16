#include <iostream>

using namespace std;
int n,s;
int arr[21];
int calc(int here,int sum)
{
    int answer=0;
    if(sum==s) answer++;
    for(int i=here+1;i<n;i++){
        answer+=calc(i,sum+arr[i]);
    }
    return answer;
}
int main()
{
    cin>>n>>s;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int answer=0;
    for(int i=0;i<n;i++){
        answer+=calc(i,arr[i]);
    }
    cout<<answer;
    return 0;
}

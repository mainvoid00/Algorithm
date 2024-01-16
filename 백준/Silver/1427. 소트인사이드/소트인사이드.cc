#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int arr[11];
    int n;
    cin>>n;
    int cnt=0;
    while(n!=0){
        arr[cnt]=n%10;
        n/=10;
        cnt++;
    }
    sort(arr,arr+cnt,greater<int>());

    for(int i=0;i<cnt;i++){
        cout<<arr[i];
    }
    return 0;
}

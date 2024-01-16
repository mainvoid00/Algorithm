#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int MAX;
int arr[30001];
int cnt;
int main(void)
{
    int n;
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cnt=0;
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]) cnt++;
            else j=n;
        }
        MAX=max(MAX,cnt);
    }
    cout<<MAX;
    return 0;
}


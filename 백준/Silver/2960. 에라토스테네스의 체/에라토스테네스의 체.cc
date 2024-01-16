#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int arr[1001];
int main()
{
    int n,k;
    int cnt=0;
    cin>>n>>k;
    for(int i=0;i<=n;i++){
        arr[i]=i;
    }
    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(arr[j]==0) continue;
            cnt++;
            if(cnt==k) cout<<j;
            arr[j]=0;
        }
    }
    return 0;
}

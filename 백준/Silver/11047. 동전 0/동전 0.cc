#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int arr[11];
int cnt;
int main(void)
{
    int n;
    int k;
    
    scanf("%d %d",&n,&k);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cnt+=k/arr[i];
        k%=arr[i];
    }
    cout<<cnt;
    return 0;
}


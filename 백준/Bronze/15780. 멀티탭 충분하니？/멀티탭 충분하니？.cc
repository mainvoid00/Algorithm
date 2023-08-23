#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,k;
    int sum=0;
    cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
        if(arr[i]%2!=0){
            arr[i]+=1;
        }
        arr[i]/=2;
        sum+=arr[i];
    }
    if(sum>=n) cout<<"YES";
    else cout<<"NO";
    return 0;
}

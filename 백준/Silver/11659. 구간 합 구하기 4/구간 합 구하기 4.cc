#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr2[n]={0};
    int result[m]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]+=arr[i]+arr2[i-1];
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        result[i]+=arr2[b-1]-arr2[a-2];
        }
    for(int i=0;i<m;i++){
        cout<<result[i]<<"\n";
    }
    return 0;
}

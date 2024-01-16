#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    int rank[n];
    fill_n(rank,n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][0]<arr[j][0]&&arr[i][1]<arr[j][1]) rank[i]++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<rank[i]<<" ";
    }
    return 0;
}

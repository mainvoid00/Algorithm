#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned long n;
    unsigned long imsi=0;
    cin>>n;
    unsigned long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                imsi=arr[i];
                arr[i]=arr[j];
                arr[j]=imsi;
            }
        }
    }
    if(n==2){
        for(int i=1;i<=arr[0];i++){
        if((arr[0]%i==0)&&(arr[1]%i==0)) cout<<i<<"\n";

    }
    }
    else{
        for(int i=1;i<=arr[0];i++){
        if((arr[0]%i==0)&&(arr[1]%i==0)&&(arr[2]%i==0)) cout<<i<<"\n";

    }
    }
    return 0;
}

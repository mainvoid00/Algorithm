#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
bool prime(int n)
{
    if(n==1) return false;
    int end=(int)sqrt(n);
    for(int i=2;i<=end;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    int cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(prime(arr[i])==true) cnt++;
    }
    cout<<cnt;
    return 0;
}

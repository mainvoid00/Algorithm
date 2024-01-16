#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]<b[j]){
                int imsi=b[i];
                b[i]=b[j];
                b[j]=imsi;
            }
        }
    }
    for(int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    cout<<sum;
    return 0;
}

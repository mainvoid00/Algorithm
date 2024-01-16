#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int a[9];
    int sum=0;
    for(int i=0;i<9;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+9);
    sum-=100;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if(a[i]+a[j]==sum){
                a[i]=0;
                a[j]=0;
                i=10;
                j=10;
            }
        }
    }
    for(int i=0;i<9;i++){
        if(a[i]==0) continue;
        cout<<a[i]<<"\n";
    }
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int n;
    int cnt[3]={0};
    cin>>n;
    char arr[n];
    scanf("%s",arr);
    char adrian[]="ABC";
    char bruno[]="BABC";
    char goran[]="CCAABB";
    for(int i=0;i<n;i++){
        if(arr[i]==adrian[i%3]) cnt[0]++;
        if(arr[i]==bruno[i%4]) cnt[1]++;
        if(arr[i]==goran[i%6]) cnt[2]++;
    }
    int maxcnt=-1;
    for(int i=0;i<3;i++){
        if(cnt[i]>maxcnt) maxcnt=cnt[i];
    }
    cout<<maxcnt<<endl;
    if(maxcnt==cnt[0]) cout<<"Adrian"<<endl;
    if(maxcnt==cnt[1]) cout<<"Bruno"<<endl;
    if(maxcnt==cnt[2]) cout<<"Goran"<<endl;

    return 0;
}

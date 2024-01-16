#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    int arr[11]={0};
    int num[20];
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a*b*c;
    int cnt=0;
    while(sum!=0){
        num[cnt]=sum%10;
        sum/=10;
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        int index=num[i];
        arr[index]++;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}

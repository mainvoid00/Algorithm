#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int max=-1;
    int maxi=0;
    int a[26]={0};
    char arr[1000001];
    cin>>arr;
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]>=65&&arr[i]<97){
            a[arr[i]-65]++;
        }
        else{
            a[arr[i]-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(max<a[i]){
            max=a[i];
            maxi=i;
        }
    }
    for(int i=0;i<26;i++){
        if(max==a[i]&&maxi!=i){
            cout<<"?";
            return 0;
        }
    }
    printf("%c",maxi+65);
    return 0;
}

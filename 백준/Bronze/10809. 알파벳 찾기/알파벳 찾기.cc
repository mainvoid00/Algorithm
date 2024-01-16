#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int arr[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    char a[101];
    cin>>a;
    int len=strlen(a);
    for(int i=0;i<len;i++){
            if(arr[a[i]-97]==-1){
                arr[a[i]-97]=i;
            }
    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

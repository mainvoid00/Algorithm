#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    char arr[101];
    cin>>arr;
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]>=65&&arr[i]<97){
            arr[i]+=32;
        }
        else arr[i]-=32;
    }
    cout<<arr;
    return 0;
}

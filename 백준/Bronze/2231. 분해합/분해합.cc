#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    char a[10];
    cin>>a;
    int len=strlen(a);
    int num=atoi(a);
    for(int i=num-(9*len);i<num;i++){
        int n=i;
        int sum=i;
        while(n!=0){
            sum+=(n%10);
            n/=10;
        }
        if(sum==num){
            cout<<i;
            return 0;
        }
    }
    cout<<"0";
    return 0;

}

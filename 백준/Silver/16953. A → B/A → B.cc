#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(void)
{
    int a,b;
    int cnt=0;
    
    cin>>a>>b;
    while(true){
        if(a>b){
            cout<<"-1";
            break;
        }
        if(a==b){
            cnt++;
            cout<<cnt;
            break;
        }
        if(b%10==1){
            b--;
            b/=10;
        }
        else if(b%2==0){
            b/=2;
        }
        else{
            cout<<"-1";
            break;
        }
        cnt++;
    }
    return 0;
}

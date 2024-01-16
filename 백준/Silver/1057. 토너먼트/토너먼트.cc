#include <iostream>
using namespace std;

int main()
{
    int peop;
    int round=1;
    int a,b;
    int imsi=2;
    int cnt=1;
    cin>>peop>>a>>b;
    while(imsi<peop){
        round++;
        imsi*=2;
    }
    for(int i=0;i<round;i++){
        if(a>b&&a%2==0&&a-b==1){
            cout<<cnt;
            break;
        }
        if(a<b&&b%2==0&&b-a==1){
            cout<<cnt;
            break;
        }
        if(a%2==0) a/=2;
        else a=a/2+1;
        if(b%2==0) b/=2;
        else b=b/2+1;
        cnt++;
    }
    return 0;
}

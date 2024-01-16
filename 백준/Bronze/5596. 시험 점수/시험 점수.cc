#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a=0,b=0;
    int c[4];
    int d[4];
    for(int i=0;i<4;i++){
        cin>>c[i];
        a+=c[i];
    }
    for(int i=0;i<4;i++){
        cin>>d[i];
        b+=d[i];
    }
    if(a>=b) cout<<a;
    else cout<<b;
    return 0;
}

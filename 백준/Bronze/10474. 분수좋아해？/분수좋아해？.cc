#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    while(1){
        unsigned long a,b;
        cin>>a>>b;
        if(a==0&&b==0) break;
        printf("%d %d / %d\n",a/b,a%b,b);
    }
    return 0;
}

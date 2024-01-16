#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int l,a,b,c,d;
    int kor,math;
    cin>>l>>a>>b>>c>>d;
    if(a%c==0) kor=a/c;
    else kor=a/c+1;
    if(b%d==0) math=b/d;
    else math=b/d+1;
    if (kor>=math) cout<<l-kor;
    else cout<<l-math;
    return 0;
}

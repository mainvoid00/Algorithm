#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int sum[3]={0};
    char result[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            int a;
            cin>>a;
            sum[i]+=a;
         }
        if(sum[i]==0) result[i]='D';
        else if(sum[i]==1) result[i]='C';
        else if(sum[i]==2) result[i]='B';
        else if(sum[i]==3) result[i]='A';
        else result[i]='E';
}
for(int i=0;i<3;i++){
    cout<<result[i]<<"\n";
}
return 0;
}

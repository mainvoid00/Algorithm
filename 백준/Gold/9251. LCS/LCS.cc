#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int LCS[1001][1001];
int main()
{
    char a[1001];
    char b[1001];
    scanf("%s",a);
    scanf("%s",b);
    int al=strlen(a);
    int bl=strlen(b);
    for(int i=1;i<=al;i++){
        for(int j=1;j<=bl;j++){
            if(a[i-1]==b[j-1]){
                LCS[i][j]=LCS[i-1][j-1]+1;
            }
            else{
                LCS[i][j]=max(LCS[i][j-1],LCS[i-1][j]);
            }
        }
    }
    cout<<LCS[al][bl];
    return 0;
}

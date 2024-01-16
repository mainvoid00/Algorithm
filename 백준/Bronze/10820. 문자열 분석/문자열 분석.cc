#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s)){
        int a[4]={0};
        for(int j=0;j<s.length();j++){
            if(s[j]>='a'&&s[j]<='z') a[0]++;
            if(s[j]>='A'&&s[j]<='Z') a[1]++;
            if(s[j]>='0'&&s[j]<='9') a[2]++;
            if(s[j]==' ') a[3]++;

        }
        for(int k=0;k<4;k++){
            cout<<a[k]<<" ";
        }
    }
    return 0;



}

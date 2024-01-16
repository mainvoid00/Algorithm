#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
            int combo=1;
            int grade=0;
            char arr[81];
            cin.getline(arr,80);
            int SIZE=strlen(arr);
            for(int j=0;j<SIZE;j++){
                if(arr[j]=='O'){
                grade+=combo;
                combo++;
            }
            else{
                combo=1;
            }
            }
            cout<<grade<<"\n";
    }
    return 0;
}

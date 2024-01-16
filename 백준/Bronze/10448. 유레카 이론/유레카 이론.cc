#include <iostream>
#include <stdio.h>
using namespace std;
int arr[45];
bool scan(int t)
{
    for(int i=1;i<45;i++){
        for(int j=1;j<45;j++){
            for(int k=1;k<45;k++){
                if(arr[i]+arr[j]+arr[k]==t){
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    for(int i=0;i<45;i++){
        arr[i]=i*(i+1)/2;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cout<<scan(num)<<"\n";
    }
    return 0;
}

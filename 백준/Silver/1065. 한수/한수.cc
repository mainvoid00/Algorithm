#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    int cnt=0;
    cin>>n;
    if(n==1000) n=999;
    if(n<100) cout<<n;
    else{
        for(int i=100;i<=n;i++){
            int num=i;
            int arr[3];
            for(int j=2;j>=0;j--){
                arr[j]=num%10;
                num/=10;
            }
            if(arr[0]-arr[1]==arr[1]-arr[2]){
                cnt++;
            }
        }
        cout<<99+cnt;
    }
    return 0;
}

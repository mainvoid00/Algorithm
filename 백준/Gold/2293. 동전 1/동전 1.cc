#include <iostream>

using namespace std;

int main()
{
    int arr[10001]={0};
    int d[10001]={0};
    d[0]=1;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=arr[i];j<=k;j++){
            d[j]=d[j]+d[j-arr[i]];
        }
    }
    cout<<d[k];
    return 0;
}

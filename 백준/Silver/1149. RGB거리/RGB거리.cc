#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[1001][3]={0};
    int rgb[1001][3]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    for(int i=0;i<3;i++){
        rgb[0][i]=arr[0][i];
    }
    for(int i=1;i<n;i++){
        rgb[i][0]=min(rgb[i-1][1],rgb[i-1][2])+arr[i][0];
        rgb[i][1]=min(rgb[i-1][0],rgb[i-1][2])+arr[i][1];
        rgb[i][2]=min(rgb[i-1][0],rgb[i-1][1])+arr[i][2];
    }
    sort(rgb[n-1],rgb[n-1]+3);
    cout<<rgb[n-1][0];
    return 0;
}

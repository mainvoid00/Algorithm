#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int result_arr[21];
pair<int, int> arr[100001];
void result(int N, int T)
{
    int cnt=0;
    int max_res=arr[0].second;
    for(int i=0;i<N;i++){
        if(arr[i].second<=max_res){
            cnt++;
            max_res=arr[i].second;
        }
        
    }
    result_arr[T]=cnt;
}
void sc(int N)
{
    for(int i=0;i<N;i++){
        cin>>arr[i].first >> arr[i].second;
    }
    sort(arr, arr+N);
    
}


int main(void)
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        sc(n);
        result(n,i);
    }
    for(int i=0;i<T;i++) cout<<result_arr[i]<<endl;
    
    return 0;
}



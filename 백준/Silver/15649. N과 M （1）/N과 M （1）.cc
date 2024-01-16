#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector<int> arr(8,0);
vector<bool> used(8,0);
void fun(int k)
{
    if(k==m){
        for(int i=0;i<m;i++) cout<<arr[i]+1<<" ";
        cout<<"\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(!used[i]){
            arr[k]=i;
            used[i]=1;
            fun(k+1);
            used[i]=0;
        }
    }
}
int main()
{
    cin>>n>>m;
    fun(0);
}

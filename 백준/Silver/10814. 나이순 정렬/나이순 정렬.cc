#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;
int cnt=0;
struct data
{
    char name[101];
    int age;
    int num;
};
bool cmp(struct data a,struct data b)
{
    if(a.age!=b.age){
        return a.age<b.age;
    }
    else{
        return a.num<b.num;
    }
}
int main()
{
    int n;
    cin>>n;
    struct data arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].age>>arr[i].name;
        arr[i].num=++cnt;
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].age<<" "<<arr[i].name<<"\n";
    }
    return 0;
}

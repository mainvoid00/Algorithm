#include <stdio.h>
#include <vector>
#include <stack>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct data
{
    int korean;
    int math;
    int eng;
    char name[11];
};
struct data arr[100001];
bool cmp(struct data a,struct data b)
{
    if(a.korean!=b.korean){
        return a.korean>b.korean;
    }
    else{
        if(a.eng!=b.eng){
            return a.eng<b.eng;
        }
        else{
            if(a.math!=b.math){
                return a.math>b.math;
            }
            else{
                return (strcmp(a.name,b.name)<0);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].korean>>arr[i].eng>>arr[i].math;
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<"\n";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        if(num[i]==1){
            cout<<"#"<<"\n"<<"\n";
            continue;
        }
        for(int j=0;j<num[i];j++) cout<<"#";
        cout<<"\n";
        for(int j=0;j<num[i]-2;j++){
                cout<<"#";
            for(int k=0;k<num[i]-2;k++){
                cout<<"J";
            }
            cout<<"#"<<"\n";
        }
        for(int j=0;j<num[i];j++) cout<<"#";
        cout<<"\n"<<"\n";
    }
    return 0;
}

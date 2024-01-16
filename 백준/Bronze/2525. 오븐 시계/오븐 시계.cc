#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int hour,min,time;
    int timehour=0,timemin=0;
    cin>>hour>>min>>time;
    if(time>=60){
        timehour=time/60;
        timemin=time%60;
    }
    else{
        timemin+=time;
    }
    if(min+timemin>=60){
        hour++;
        min=min+timemin-60;
    }
    else{
        min+=timemin;
    }
    if(hour+timehour>=24){
        hour=hour+timehour-24;
    }
    else{
        hour+=timehour;
    }
    cout<<hour<<" "<<min;
    return 0;
}

#include <iostream>
#include <stdio.h>
#define PI       3.14159265358979323846
using namespace std;
int main(void)
{
  int n=1;
  while (1) {
    double r;
    int a;
    double time;
    cin>>r>>a>>time;
    if(a==0) break;
    time/=3600;
    double miles= PI*r/63360*a;
    double mph= miles/time;
    printf("Trip #%d: %.2lf %.2lf\n",n,miles,mph );
    n++;
  }
  return 0;
}

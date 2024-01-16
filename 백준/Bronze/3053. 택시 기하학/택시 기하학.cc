#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    double a;
    cin>>a;
    double uq=a*a*M_PI;
    printf("%.6lf\n",uq);
    double taxi=pow(a,2)*2;
    printf("%.6lf\n",taxi);
    return 0;
}

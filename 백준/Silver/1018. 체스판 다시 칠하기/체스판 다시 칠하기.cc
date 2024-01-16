#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

char map[51][51];

char black[8][9]=
{
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

char white[8][9]=
{
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%s",map[i]);
    }
    int min=987654321;
    for(int i=0; i<n-7; i++)
    {
        for(int j=0; j<m-7; j++)
        {
            int w=0;
            int b=0;
            for(int p=0; p<8; p++)
            {
                for(int q=0; q<8; q++)
                {
                    if(map[i+p][j+q]!=black[p][q])
                    {
                        b++;
                    }
                    if(map[i+p][j+q]!=white[p][q])
                    {
                        w++;
                    }
                }
            }
            if(min>b)
            {
                min=b;
            }
            if(min>w)
            {
                min=w;
            }
        }
    }
    printf("%d",min);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    int i;
    int count=0;
    char str[51]={0};

    scanf("%d",&n);



    while (n>0) {
        scanf("%s",str);
        for (i=0;i<strlen(str);i++) {
            if (str[i] == '(') count ++;
            else if (str[i] == ')') count --;
            else ;

            if (count <0 ) {
                printf("NO\n");
                break;
            }

        }
        if (count==0) printf("YES\n");
        else if (count>0) printf("NO\n");


        n--;
        count=0;
    }






    return 0;

}
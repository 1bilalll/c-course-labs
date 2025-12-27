#include <stdio.h>
int main (){
    int b,i,j;
    scanf("%d",&b);
    for (i=0;i<b;i++){
        for (j=0;j<b;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

    
}
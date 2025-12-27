#include <stdio.h>
int main(void) 
{
    int i,a,n,sayac=0;
    scanf("%d", &a);
    for (i=0; i<a; i++){
        scanf("%d",&n);
        if(n>10000){
            sayac=sayac+1;
        }
        else {
            sayac=sayac;
        }
    }
    printf("%d",sayac);
    return 0;
}
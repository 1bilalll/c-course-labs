#include <stdio.h>
int main (){

    double array[50];
    int a,b,toplam=0;
    double i,d,av;
    scanf("%d",&b);
    for (a=0;a<b;a++){ 
        scanf("%lf",&i);
        array[a]=i;
        toplam=toplam+i;
    }
    av=toplam/b;
    for (a=0;a<b;a++){
      d=av-array[a];  
      printf("%.1lf\n",d);
    }

    return 0;
}
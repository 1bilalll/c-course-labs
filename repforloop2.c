#include <stdio.h>
int main(void) {
    
    double ages[10],weight[10];
    int i,a;
    double total=0;

    scanf("%d",&a);
    for (i=0; i<a; i++) {
        scanf("%lf", &ages[i]);
    }
    
    for(i=0;i<a;i++){
       scanf("%lf",&weight[i]);
    }
    
    for (i=0;i<10;i++){
        total+=ages[i]*weight[i];
        
    }
    printf("%lf",total);
    return 0;
}
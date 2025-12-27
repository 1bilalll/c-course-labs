#include <stdio.h>

int main(){
    int a,count=0;
    int target;
    scanf("%d",&target);
    while (1){
        scanf("%d",&a);
        count++;
        if (a >target){
            printf("it is less\n");
            
        }
        else if (a <target){
            printf("it is more\n");
        }
        else {
          printf("Number of tries needed:%d\n", count);
            break;

        }
    }
    printf("%d",count);
    return 0;
    
}
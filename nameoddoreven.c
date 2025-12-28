#include <stdio.h>
int main(void) {
    int count=0;
    char name[51];
    int i = 0;
    scanf("%s", name);
    while (name[i]!='\0') {
      count=count+1;
        i++;
    }
    if (count%2==0){
        printf("%d",1);
    }
    else {
       printf("%d",2); 
    }
    return 0;
}
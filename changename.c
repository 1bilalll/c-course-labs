#include <stdio.h>
int main(void) {
    int a,i;
    char name[30];
    char surname[50];
    scanf("%d",&a);
    for (i=0;i<a;i++){
        scanf("%s %s", name, surname);
        printf("%s %s\n", surname, name);
    }
    
    return 0;
}
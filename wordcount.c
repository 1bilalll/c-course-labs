#include <stdio.h>
#include <string.h>
int main(void) {
    
    int a,b,i;
    scanf("%d",&a);
    char word[101]; 
    scanf("%s", word);
    b = strlen(word);
    for (i=0;i<a;i++){
        printf("%s\n",word);
    }
    
    return 0;
}
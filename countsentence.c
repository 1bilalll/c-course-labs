#include <stdio.h>
#include <string.h>
int main (){
    int a,k,i;
    char kel[101];
    int rec[10000];
    int max=0;
    scanf("%d",&a);
    for (i=0;i<a;i++){
     scanf("%s",kel);
     k=strlen(kel);
     rec[i]=k;
     if (rec[i]>max){
         max=rec[i];
     }
    
    }
    printf("%d",max);
    
    
    return 0;
}
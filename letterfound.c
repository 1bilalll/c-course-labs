#include <stdio.h>
#include <string.h>
int main(void) {
    char word[50];
    int a,b,avr,c=0,d=0,i=0;
   
    scanf("%s", word);
     a=strlen(word);
     avr=(a+1)/2;
     for (i=0;i<avr;i++){
         if (word[i] =='t' || word[i]=='T'){
             c=1;
             break;
         }

         }
    if (!d){     
     for (i=avr;i<a;i++){
         if (word[i] =='t' || word[i]=='T'){
             d=1;
             break;
         }
     }
     }
     if(c){
         printf("1");
     }
     else if (d){
         printf("2");
     }
     else {
         printf("-1");
     }

    return 0;
}
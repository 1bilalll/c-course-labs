#include <stdio.h>
int min(int a,int b);


int main(void)
{
 int i,k;
 int a;
 scanf("%d",&a);
 int list[a];
 for (i=0;i<a;i++){
    scanf("%d",&list[i]);
 }
 k=list[0];
 for (i=1;i<a;i++){
     k=min(k,list[i]);
 }
 printf("%d",k);
  return 0;
}



int min(int a,int b){
    int c;
   if (a<b){
       c=a;
      
   }  
   else if (a>b){
       c=b;
      
   }
   else {
       c=a;
   }
   return c;
}
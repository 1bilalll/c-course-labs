#include <stdio.h>

void reverseArray(int *ptr, int k);
int main(){
 int m,i;
 scanf("%d",&m);
 int array[m];
 for (i=0;i<m;i++){
    scanf("%d",&array[i]);
 }
 reverseArray(array,m);
 for (i=0;i<m;i++){
    printf("%d",array[i]);
 } 
}

void reverseArray(int *ptr,int k){
  int i,m;
   for (i=0;i<k/2;i++){
    m=ptr[i];
    ptr[i]=ptr[k-i-1];
    ptr[k-i-1]=m;
   }
}
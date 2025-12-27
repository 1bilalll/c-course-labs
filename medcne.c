#include <stdio.h>

int main (){
int a,b;
int i;
scanf("%d",&a);
scanf("%d",&b);
while (1){
  scanf("%d",&i);
  if (i == -999){
    break;
  }
  if (i>=a && i<=b){
    printf("Nothing to do\n");
  }
  else {
    printf("Alert!");
    break;
  }
  return 0;
}



}
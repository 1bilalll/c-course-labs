#include <stdio.h>

int sumOfDigits(int);
int main(void) {
    int n;
    int toplam;
    scanf("%d",&n);
    toplam=sumOfDigits(n);
    printf("%d",toplam);
    
    return 0;
}
int sumOfDigits(int m){
  if (m==0){
      return 0;
   }
   return (m%10+sumOfDigits(m/10));
}
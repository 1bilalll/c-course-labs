#include <stdio.h>
int main(void) {
    int n=1;
    int sum=1;
    int m;
    scanf("%d",&m);
    while (sum<m) {
      sum=sum+sum*2;
      n++;
    }
    printf("%d",n);
    return 0;
}
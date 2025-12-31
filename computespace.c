#include <stdio.h>

int main (){
    
    int i,a,m;
    int toplam=0;
    char n;
    scanf("%d",&a);
    
    for (i=0;i<a;i++){
        scanf("%d %c",&m,&n);
        if (n=='i'){ 
        toplam+=m*sizeof(int);
        }
        else if (n=='d'){
            toplam+=m*sizeof(double);
        }
        else if (n=='c'){
            toplam+=m*sizeof(char);
        }
        else {
            printf("Invalid tracking code type");
            return 0;
        }
        
    }
    printf("%d bytes",toplam);

    return 0;
}
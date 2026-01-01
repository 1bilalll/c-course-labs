#include <stdio.h>


void gen(int *age );
int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	
	gen(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void gen(int *age){
    if (*age > 20){
        *age =*age-10;
    }
    else {
        *age = 2*(*age);
    }
    
    
}
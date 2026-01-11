#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int i,num;
    struct point *polygon;
    scanf("%d",&num);
    polygon = (struct point*)malloc(num*sizeof(struct point));
    initializePoly(polygon, num);
    printPoly(polygon, num);
    free(polygon);
    return 0;
}


void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *ptr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d",&ptr[i].x);
        ptr[i].y = ptr[i].x * ptr[i].x;
    }
}
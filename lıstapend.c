#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
void freeStudents(struct student *start);
/* add other prototypes here if needed*/

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;

    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    tmp = start->next;

    free(start);

    start = tmp;
    tmp = start->next;

    free(start);
    free(tmp);

    return 0;
}
struct student *createStudent(char studentName[50], int studentAge){
    struct student *s;
    int i = 0;

    s = malloc(sizeof(struct student));

    while (studentName[i] != '\0') {
        s->name[i] = studentName[i];
        i++;
    }
    s->name[i] = '\0';

    s->age = studentAge;
    s->next = NULL;

    return s;
}

void printStudents(struct student *start){
    struct student *ptr = start;

    while (ptr != NULL) {
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}
struct student * append(struct student * end, struct student * newStudptr) {
    end->next = newStudptr;
    return newStudptr;
}
void freeStudents(struct student *start) {
    struct student *tmp;

    while (start != NULL) {
        tmp = start;
        start = start->next;
        free(tmp);
    }
}
#include <stdio.h>

void cev(int bytes) {

    if (bytes < 1000) {
        printf("%d B\n", bytes);
        return;
    }

    int kb = bytes / 1000;
    int b  = bytes % 1000;

    if (kb < 1000) {
        if (b == 0)
            printf("%d KB\n", kb);
        else
            printf("%d KB and %d B\n", kb, b);
        return;
    }

    int mb = kb / 1000;
    kb = kb % 1000;

    if (kb == 0 && b == 0){
        printf("%d MB\n", mb);
    }
    else if (b == 0){
        printf("%d MB and %d KB\n", mb, kb);
    }
    else {
        printf("%d MB and %d KB and %d B", mb, kb, b);
    }
        
    }

int main() {

    char t;
    int count;
    int total = 0;

    scanf(" %c %d", &t, &count);

    if (t == 'i')
        total = count * sizeof(int);
    else if (t == 's')
        total = count * sizeof(short);
    else if (t == 'c')
        total = count * sizeof(char);
    else if (t == 'd')
        total = count * sizeof(double);

    cev(total);
    return 0;
}

#include <stdio.h>

int main() {
    int x = 10;       
    int *ptr = &x;    

    printf("Gia tri cua x (cach 1): %d\n", x);
    printf("Dia chi cua x (cach 1): %p\n", (void*)&x);

    printf("Gia tri cua x (cach 2): %d\n", *ptr);
    printf("Dia chi cua x (cach 2): %p\n", (void*)ptr);

    return 0;
}


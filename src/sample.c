#include <stdio.h>
#include <stdlib.h>

int main() {
    int unused_variable = 42; // Intentional unused variable
    char *memory_leak = malloc(100); // Intentional memory leak

    printf("Hello, World!\n");
    return 0;
}

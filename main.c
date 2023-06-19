#include <stdio.h>

void test(const int matrix[][2]){
    printf("%d",matrix[0][0]);
}

int main(void ) {
    int val[2][2] = {0};
    test(val);
    printf("Hello, World!\n");
    return 0;
}

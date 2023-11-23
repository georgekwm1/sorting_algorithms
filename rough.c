#include <stdio.h>

void swap(int *a, int *b)
{
    int *temp = malloc(sizeof(int));
    *temp = *a;
    *a = *b;
    *b = *temp;

}

int main(void)
{
    int x = 10;
    int y = 20;
    printf("Before swapping: x is %d and y is %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x is %d and y is %d\n", x, y);
    return 0;
}
#include "array.h"
#include <stdio.h>
#define SIZE 10

int main(void)
{
    int array[5] = {0};
    fill_array(array, SIZE);
    print_array(array, SIZE);
    printf("%d", search_index(array, SIZE, 0));
}

#include "array.h"
#include <stdio.h>
#include <stdlib.h>
void fill_array(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size; i++) {
        scanf("%d", array + i);
        setbuf(stdin, NULL);
    }
}
void print_array(const int array[], const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        printf(" %d ", array[i]);
    }
}
int search_max(const int array[], const unsigned int size)
{
    int max = array[0];
    for (unsigned int i = 1; i < size - 1; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}
int search_index(const int array[], const unsigned int size, const int number)
{
    int index = 0;

    for (unsigned int i = 0; i < size; i++) {
        if (array[i] == number) {
            index = i;
            break;
        }
    }
    return index;
}
int search_min(const int array[], const unsigned int size)
{
    int min = array[0];
    for (unsigned int i = 1; i < size - 1; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}
void reverse_array(int *array, const unsigned int size)
{
    int reverse = array[0];
    for (unsigned int i = 0, j = size - 1; i < size / 2; i++, j--) {
        array[i] = array[j];
        array[j] = reverse;
        reverse = array[i + 1];
    }
}
void sorting(int *array, const unsigned int size)
{
    int tmp = 0;

    for (unsigned int i = 0; i < size - 1; ++i) {
        for (unsigned int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                tmp = array[j + 1];
            }
        }
    }
}
int equal(const int arrayFirst[], const unsigned int sizeFirst,
          const int arraySecond[], const unsigned int sizeSecond)
{
    int res = 0;
    if (sizeFirst == sizeSecond) {
        for (unsigned int i = 0; i < sizeSecond; ++i) {
            if (arrayFirst[i] == arraySecond[i]) {
                res = 1;
            } else {
                res = 0;
                break;
            }
        }
    }
    return res;
}

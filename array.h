#ifndef _ARRAY_H_
#define _ARRAY_H_
void fill_array(int *array, const unsigned int size);
void print_array(const int array[], const unsigned int size);
int search_max(const int array[], const unsigned int size);
int search_index(const int array[], const unsigned int size, const int number);
int search_min(const int array[], const unsigned int size);
void reverse_array(int *array, const unsigned int size);
void sorting(int *array, const unsigned int size);
int equal(const int arrayFirst[], const unsigned int sizeFirst,
          const int arraySecond[], const unsigned int sizeSecond);

#endif // _ARRAY_H_

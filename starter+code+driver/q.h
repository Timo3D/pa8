/*!
@file main.c
@author Timothy Wong
@course RSE1201
@week 9
@ass08
@date 28/10/2022
@brief This file contains the declarations for the functions find,
       find_any, count, count_any, compare, exchange, and copy.
*//*_____________________________________________________________*/

char const* find(char const *begin, char const *end, char val); //returns a pointer to the first occurrence of val in a half-open range of values

char const* find_any(char const *begin, char const *end, char const *vals, int len); //returns a pointer to the first occurrence of any member of the array whose first element is pointed to by pointer vals and has len number of elements in a half-open range of values.

int count(char const *begin, char const *end, char val); //returns the number of elements in a half-open range of values equivalent to val

int count_any(char const *begin, char const *end, char const *vals, int len); //returns the number of elements in a half-open range of values equivalent to any member of the array whose first element is pointed to by parameter vals and has len number of elements.

int compare(char const *begin1, char const *begin2, int len); //compares corresponding elements in the arrays whose first elements are pointed to by begin1 and begin2 (both of which have len number of values) to determine if they contain the same values in the same order. If the contents of the two arrays are exactly similar, the function returns 0 . The function returns a negative value when an element in the array whose first element is pointed to by begin1 has a smaller value than the corresponding element in the array whose first element is pointed to by begin2 . Otherwise, the function returns a positive number

void exchange(char *begin1, char *begin2, int len); //swaps the values in the two arrays whose first elements are pointed to by begin1 and begin2 with both arrays containing count number of elements.

void copy(char *dst, char *src, int len); //copies len number of values starting from the element pointed to by src into corresponding elements pointed to by dst


/*!
@file main.c
@author Timothy Wong
@course RSE1201
@week 9
@ass08
@date 28/10/2022
@brief This file contains the definitions for the functions find,
       find_any, count, count_any, compare, exchange, and copy.
*//*_____________________________________________________________*/

#define NULL ((void*)0)

char const* find(char const *begin, char const *end, char val) { //returns a pointer to the first occurrence of val in a half-open range of values
    for (long int i = 0; i < (end - begin); i++) if (*(begin + i) == val) return begin + i;
    return NULL;
}

char const* find_any(char const *begin, char const *end, char const *vals, int len) { //returns a pointer to the first occurrence of any member of the array whose first element is pointed to by pointer vals and has len number of elements in a half-open range of values.
    for (int i = 0; i < len; i++) if (find(begin, end, *(vals + i))) return find(begin, end, *(vals + i));
    return NULL;
}

int count(char const *begin, char const *end, char val) { //returns the number of elements in a half-open range of values equivalent to val
    int ctr = 0;
    for (long int i = 0; i < (end - begin); i++) if (*(begin + i) == val) ctr++;
    return ctr;
}

int count_any(char const *begin, char const *end, char const *vals, int len) { //returns the number of elements in a half-open range of values equivalent to any member of the array whose first element is pointed to by parameter vals and has len number of elements.
    int ctr = 0;
    for (int i = 0; i < len; i++) if (find(begin, end, *(vals + i))) ctr += count(begin, end, *(vals + i));
    return ctr;
}

int compare(char const *begin1, char const *begin2, int len) { //compares corresponding elements in the arrays whose first elements are pointed to by begin1 and begin2 (both of which have len number of values) to determine if they contain the same values in the same order. If the contents of the two arrays are exactly similar, the function returns 0 . The function returns a negative value when an element in the array whose first element is pointed to by begin1 has a smaller value than the corresponding element in the array whose first element is pointed to by begin2 . Otherwise, the function returns a positive number
    int ctr1 = 0, ctr2 = 0;
    for (long int i = 0; i < len; i++) {
        ctr1 += *(begin1 + i);
        ctr2 += *(begin2 + i);
    }
    return ctr1 - ctr2;
}

void exchange(char *begin1, char *begin2, int len) { //swaps the values in the two arrays whose first elements are pointed to by begin1 and begin2 with both arrays containing count number of elements.
    char temp;
    for (int i = 0; i < len; i++) {
        temp = *(begin1 + i);
        *(begin1 + i) = *(begin2 + i);
        *(begin2 + i) = temp;
    }
    return;
}

void copy(char *dst, char *src, int len) { //copies len number of values starting from the element pointed to by src into corresponding elements pointed to by dst
    for (int i = len - 1; i >= 0; i--) *(dst + i) = *(src + i);
    return;
}
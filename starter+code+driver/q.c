// NOTE 1: File documentation block required

// NOTE 2: Even if you don't need the NULL, don't remove this macro ...
#define NULL ((void*)0)

// NOTE 3: When uploading this file for grading, make sure to remove all
// standard library includes from this file.
// The auto-grader will not accept your submission if the file contains
// include directives.

// NOTE 4: When uploading this file for grading, make sure to remove
// all references to the subscript operator or the [ or ] symbols from your code. 
// It is important that even your comments should not include these symbols.

// Definitions of functions declared in q.h go here ...

#include <stdio.h>

char const* find(char const *begin, char const *end, char val) {
    for (long int i = 0; i < (end - begin); i++) if (*(begin + i) == val) return begin + i;
    return NULL;
}

char const* find_any(char const *begin, char const *end, char const *vals, int len) {
    for (int i = 0; i < len; i++) if (find(begin, end, *(vals + i))) return find(begin, end, *(vals + i));
    return NULL;
}

int count(char const *begin, char const *end, char val) {
    int ctr = 0;
    for (long int i = 0; i < (end - begin); i++) if (*(begin + i) == val) ctr++;
    return ctr;
}

int count_any(char const *begin, char const *end, char const *vals, int len) {
    int ctr = 0;
    for (int i = 0; i < len; i++) if (find(begin, end, *(vals + i))) ctr += count(begin, end, *(vals + i));
    return ctr;
}

int compare(char const *begin1, char const *begin2, int len) {
    int ctr1 = 0, ctr2 = 0;
    for (long int i = 0; i < len; i++) {
        ctr1 += *(begin1 + i);
        ctr2 += *(begin2 + i);
    }
    return ctr1 - ctr2;
}

void exchange(char *begin1, char *begin2, int len) {
    char temp;
    for (int i = 0; i < len; i++) {
        temp = *(begin1 + i);
        *(begin1 + i) = *(begin2 + i);
        *(begin2 + i) = temp;
    }
    return;
}

void copy(char *dst, char *src, int len) {
    for (int i = len - 1; i >= 0; i--) *(dst + i) = *(src + i);
    return;
}
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int src_len = 0;
    
    // Find the length of dest
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    // Find the length of src
    while (src_len < n && src[src_len] != '\0') {
        src_len++;
    }

    // Append src to dest
    for (int i = 0; i < src_len; i++) {
        dest[dest_len + i] = src[i];
    }

    // Null-terminate the resulting string
    dest[dest_len + src_len] = '\0';

    return dest;
}

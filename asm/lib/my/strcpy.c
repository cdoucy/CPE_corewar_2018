/*
** EPITECH PROJECT, 2019
** mystring
** File description:
** strcpy
*/

#include "tools.h"

char *my_strcpy(char *dest, char const *cpy)
{
    size_t i = 0;

    for (; cpy[i]; i++)
        dest[i] = cpy[i];
    dest[i] = 0;
    return dest;
}

char *my_strncpy(char *dest, char const *cpy, size_t n)
{
    size_t i = 0;

    for (; cpy[i] && i < n; i++)
        dest[i] = cpy[i];
    dest[i] = 0;
    return dest;
}

char *my_strndup(char const *str, size_t n)
{
    char *dup = malloc(sizeof(char) * (n + 1));

    if (!dup)
        return NULL;
    my_strncpy(dup, str, n);
    return dup;
}

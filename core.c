#include "header.h"
void strcpy_my(char *destination, char *source)
{   
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    while (destination[i] != '\0')
    {
        destination[i] = '\0';
        i++;
    }
}

void printf_str(char *string)
{   
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string [i]);
        i++;
    }
    printf("\n");
}

void strncpy_my(char *destination, char *source, int n)
{   
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (destination[i] != '\0')
        {
            destination[i] = source[i];
        }
    }
    while (destination[i] != '\0')
    {
        destination[i] = '\0';
        i++;
    }
}

void strcat_my(char *destination, char *append)
{
    int i = 0;
    int j = 0;
    while (destination[i] != '\0') i++;
    while (append[j] != '\0')
    {
        destination[i] = append[j];
        i++;
        j++;
    }
}

int strchr_my(char *string, char ch)
{
    int i = 0;
    while ((string[i] != ch) && (string[i] != '\0')) i++;
    if (string[i] == '\0') return -1;
    if (string[i] != '\0') return i;
}

int strlen_my(char *string)
{
    int i = 0;
    while (string[i] != 0) i++;
    return i;
}
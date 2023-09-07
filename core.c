#include "header.h" // TODO: header name should be the same as .c file

// TODO: We use .cpp files and cpp compiler, it's stricter and overall
//       better for learning, rename this file and all other!
//==================================================================================================================================
char  *strcpy_my(char *destination, const char *source)
{   // TODO: What if destination or source is NULL, what if
    //       destination == source, would that work too?
    int i = 0;
    while (source[i] != '\0')
    {
	// TODO: not the fastest way to do it. Can you do better?
	// NOTE: You can copy more than just one char at a time!
        destination[i] = source[i];
        i++;
    } // TODO: a bit more space would be nice :0  
    while (destination[i] != '\0')
    {
	// TODO: also not the fastest :/
	// NOTE: Also can be faster, and even easier, using library function!
        destination[i] = '\0';
        i++;
    }
    return destination; 
}

void puts_my(char *string)
{   // TODO: What if string is NULL? (and same for all functions)
    int i = 0;
    while (string[i] != '\0')
    {
	// TODO: printf seems like a big overkill for implementing your
	//       puts :)

        //       If you're on linux use write call instead.

        //       On windows (and if you want to be cross-platform in general)
        //       you can use putc, but it's a less interesting task, because
        //       it does a lot for you already :)
        printf("%c", string [i]);
        i++;
    }
    printf("\n");
}


char *strncpy_my(char *destination, const char *source, size_t n) 
{   
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (destination[i] != '\0') // TODO: really? Does source string even matter at this point?
        {
            destination[i] = source[i];
        }
    }
    while (destination[i] != '\0')
    {
        destination[i] = '\0';
        i++;
    }

    return destination;
}

char *strcat_my(char *destination, const char *append)
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

    // TODO: Is your string terminated after this? I am afraid it's not...
    //       Did you test this functions?) You should!
    return destination;
}

char *strchr_my(const char *string, int ch) 
{
    int i = 0;
    while ((string[i] != ch) && (string[i] != '\0')) i++;

    if (string[i] == '\0') return NULL;
    else return (char *) string + i; 
}

size_t strlen_my(const char *string)
{
    int i = 0;
    while (string[i] != 0) i++;
    return i; // TODO:  ^ use a proper symbol
}

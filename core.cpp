#include "core.h" // TOO: header name should be the same as .c file

// TOO: We use .cpp files and cpp compiler, it's stricter and overall
//       better for learning, rename this file and all other!
//==================================================================================================================================
char  *strcpy_my(char *destination, const char *source)
{   // TOO: What if destination or source is NULL, what if
    //       destination == source, would that work too?
    assert (destination != NULL);
    if (destination == source) return destination;
    
    int i = 0;
    while (source[i] != '\0')
    {
	// TOO: not the fastest way to do it. Can you do better?
	// NOTE: You can copy more than just one char at a time!
        i++;
    } // TOO: a bit more space would be nice :0  

    memcpy (destination, source, i+1);

    return destination; 
}

void puts_my(char *string)

{   // TOO: What if string is NULL? (and same for all functions)
    assert (string != NULL);

    int i = 0;
    while (string[i] != '\0')
    {
	// TOO: printf seems like a big overkill for implementing your
	//       puts :)

        //       If you're on linux use write call instead.

        //       On windows (and if you want to be cross-platform in general)
        //       you can use putc, but it's a less interesting task, because
        //       it does a lot for you already :)
        putchar (string[i]);
        i++;
    }
    puts("\n");
}


char *strncpy_my(char *destination, const char *source, size_t n) 
{   
    assert (destination != NULL);

    int i = 0;
    memcpy(destination, source, n);

    return destination;
}

char *strcat_my(char *destination, const char *append)
{
    assert (destination != NULL);

    int i = 0;
    int j = 0;

    while (destination[i] != '\0') i++;
    while (append[j] != '\0')
    {
        destination[i] = append[j];
        i++;
        j++;
    }

    destination[i+1] = '\0';
    // TOO: Is your string terminated after this? I am afraid it's not...
    //       Did you test this functions?) You should!
    return destination;
}

char *strchr_my(const char *string, int ch) 
{
    assert (string != NULL);

    int i = 0;
    while ((string[i] != ch) && (string[i] != '\0')) i++;

    if (string[i] == '\0') return NULL;
    else return (char *) string + i; 
}

size_t strlen_my(const char *string)
{
    assert (string != NULL);
    
    int cymbol_index = 0;
    while (string[cymbol_index] != 0) cymbol_index++;
    return cymbol_index; // TOO:  ^ use a proper symbol
}

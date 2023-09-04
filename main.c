#include "header.h"
int main ()
{
    char source [20] = "Ya pidoras";
    char destination [20] = "Na - na - na";
    char ch = 'p';
    int n = 3;

    printf ("initial lines:\n");
    printf_str(source);
    printf_str(destination);

    /* strcpy_my(destination, source); */

   /* printf ("lines after strcpy_my\n");
    printf_str(source);
    printf_str(destination);    

    strcpy(destination, source);

    printf ("lines after strcpy\n");
    printf_str(source);
    printf_str(destination); */

    /*strncpy_my(destination, source, n);
    printf ("lines after strncpy_my\n");
    printf_str(source);
    printf_str(destination);   */


    /* strncpy(destination, source, n);
    printf ("lines after strncpy\n");
    printf_str(source);
    printf_str(destination);   */

    /* strcat_my(destination, source);
    printf ("lines after strcat\n");
    printf_str(source);
    printf_str(destination);  */

    printf("%d", strchr_my(source, ch));

    return 0;
}


// TODO Rename func params from victim and robber to source and destination 
// TODO Do separate files

// FIXME Add return types to funcs

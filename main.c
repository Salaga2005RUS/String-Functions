#include "header.h"
int main ()
{
    char source [20] = "Ya pidoras";
    char destination [20] = "Na - na - na";
    char ch = 'p';
    int n = 3;

    printf ("initial lines:\n");
    puts_my(source);
    puts_my(destination);

    /* strcpy_my(destination, source); */

   /* printf ("lines after strcpy_my\n");
    puts_my(source);
    puts_my(destination);    

    strcpy(destination, source);

    printf ("lines after strcpy\n");
    puts_my(source);
    puts_my(destination); */

    /*strncpy_my(destination, source, n);
    printf ("lines after strncpy_my\n");
    puts_my(source);
    puts_my(destination);   */


    /* strncpy(destination, source, n);
    printf ("lines after strncpy\n");
    puts_my(source);
    puts_my(destination);   */

    /* strcat_my(destination, source);
    printf ("lines after strcat\n");
    puts_my(source);
    puts_my(destination);  */

    printf("%d", strchr_my(source, ch));

    return 0;
}


// TDO Rename func params from victim and robber to source and destination 
// TDO Do separate files

// FXME Add return types to funcs

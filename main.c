#include "header.h" // TODO: add newlines!
int main ()
{
    // TODO: Do you have a testing system from quadratic equation?
    //       If not, you can look up google test, it will make your
    //       tests a lot more readable and convenient.
    char source [20] = "Ya pidoras";
    char destination [20] = "Na - na - na";
    char ch = 'p';
    int n = 3;

    printf ("initial lines:\n");
    puts_my(source);
    puts_my(destination);

    /* strcpy_my(destination, source); */

    // TODO: Don't comment old code, you use git's history to restore it anyway,
    //       and there are a lot more information about changes in git than there is
    //       in comments!
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

    printf("%d", strchr_my(source, ch)); // TODO: Your format argument is wrong!

    return 0;
}


// TDO Rename func params from victim and robber to source and destination 
// TDO Do separate files

// FXME Add return types to funcs

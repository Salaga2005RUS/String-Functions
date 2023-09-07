// TODO: Every header you write should have an include guard, it's a thing that protects
//       it from double inclusion: 
//
//       == Consider an example ==

//       1) You have two files:

//           // --- test.h ---
//           void foo();

//           // -- test.cpp --
//           #include "test.h"
//           #include "test.h"

//          When your compiler runs, it will expand code in test.cpp to: 

//           // -- test.cpp --
//           void foo();
//           void foo();

//          NOTE: You can easily check it using "-E" flag with your
//          compiler, like: clang++ -E ... or g++ -E ..., this will
//          output preprocessed file to standard output.

//          You can ask so what? Where is the problem? Your would be right,
//          there are no problem, yet, because multiple function
//          foward-declarations are, in fact, allowed.

//       2) Let's take a look at another case:

//           // --- test.h ---
//           struct foo {};

//           // -- test.cpp --
//           #include "test.h"
//           #include "test.h"

//          Everything is the same, except multiple definitions of a
//          struct are not allowed in a single file, so this program
//          doesn't compile anymore.

//          You can say: why would you include one header multiple 
//          times, just remove the second inclusion.
// 
//          And in this case it's indeed A solution.

//       3) But in the third case there will be no such solution: 

//           // ---- a.h ----
//           struct foo {};

//           // ---- b.h ----
//           #include "a.h"
//           // use foo in any way

//           // ---- c.h ----
//           #include "a.h"
//           // use foo in any way

//           // ---- d.h ----
//           #include "a.h"
//           #include "b.h"
//           // use stuff from a.h
//           // and stuff from b.h

//           // - test.cpp -
//           #include "d.h"
//           // use something from d.h

//          In this case there's no way you can avoid double
//          inclusion, because every file use the least amount
//          of header inclusion it needs, there's nothing to 
//          remove. Yet a copy of a.h is included in both
//          b.h and c.h, so including both of them will always
//          lead to double inclusion.

//          That's called diamond inclusion:
//                a.h
//               /  \
//              /    \
//            b.h    c.h  :) Because it looks like a diamond!
//             \     /
//              \   /
//               d.h

//          What to do then? Use header guards!

//       4) Header guards in action! In the same layout!
//           // ---- a.h ----
//           #ifndef A_H 
//           #define A_H
//
//           struct foo {};
//
//           #endif

//           // ---- b.h ----
//           #ifndef B_H 
//           #define B_H
//
//           #include "a.h"
//           // use foo in any way
//
//           #endif

//           // ---- c.h ----
//           #ifndef C_H 
//           #define C_H
//
//           #include "a.h"
//           // use foo in any way
//
//           #endif

//           // ---- d.h ----
//           #ifndef D_H 
//           #define D_H
//
//           #include "a.h"
//           #include "b.h"
//           // use stuff from a.h
//           // and stuff from b.h
//
//           #endif

//           // - test.cpp -
//           #include "d.h"
//           // use something from d.h

//          This kind of machinery is expected to be in every
//          header you ever write, do you get how it works?)

#include <stdio.h> // TODO: Do you really need it here?
#include <string.h>

// TODO: Where is documentation?)

char  *strcpy_my(char *destination, const char *source);
void puts_my(char *string);
char *strncpy_my(char *destination, const char *source, size_t n);
char *strcat_my(char *destination, const char *append);
char *strchr_my(const char *string, int ch);
size_t strlen_my(const char *string);

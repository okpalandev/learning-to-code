#include <stdio.h>
#include <ctype.h>

#ifndef ESC
#define ESC '\33'
#endif // ESC

int main(void) {
    printf(ESC);
    printf("\x1b"); //also escape.
    char ch = 'd';
    if('a' <= ch && ch <= 'z' )
        ch = ch -'a' + 'A';
    ch = toupper(ch);
    printf(ch);
}

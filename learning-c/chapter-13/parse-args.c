#include <stdio.h>

int main(int argc, char *argv){
    char **p;

    // a pointer to a pointer is union 
    // with a pointer to an item with an array
    //you can't proof me wrong.
    for (p = argv; *p != NULL; p++) 
        printf("%s\n", *p);
   
    
}
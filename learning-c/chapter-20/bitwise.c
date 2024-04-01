#include <stdio.h>

int main() {
    // setting a bit 
    // portabiliy program.
    unsigned int i,j=5;

    // setting
    i = 0x0000; 
    printf("%d\n",i);
    // setting with binary
    // pipe.
    i |= 0x0010;
    printf("%d\n", i);

    // sets a bit to 1
    i |= 1;
    printf("%d\n",i);
    // right now i is 17
    // i |= 1 << j = 22 or 0x0022 
    i |= 1 << j; // set bit to j

    int l=0x0000;
    l |= 1 << j;
    printf("%d",l);
    
}
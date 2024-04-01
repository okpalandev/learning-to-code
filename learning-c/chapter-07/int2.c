#include <stdio.h>
#include <ctype.h>

int main(void){
    int i;
    char command;
    printf("Enter an integer: ");
    scanf("%d",&i);
    printf("Enter a command: ");
    command = getchar();

    putchar(toupper(command));

}


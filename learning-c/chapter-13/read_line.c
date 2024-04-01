#include <stdio.h>

/** A string parser in C.*/

int read_line(char str[],int n){
 int ch,i=0;
    while ((ch=getchar()) != '\n')
        if(i < n)
    str[i++]=ch;
    str[i]='\0';
    return i;
}

int count_spaces(const char *s){
    int count = 0 , i;

    for(; *s !='\0'; i++)
        if(*s == ' ')
        count++;
    return count;
}

int main(void){
    char str= "hello";
    printf(read_line(str,5+1));
}


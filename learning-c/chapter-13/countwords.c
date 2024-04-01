
#include <stdio.h>
#include <string.h>


// Function to count the number of words in a string
int countWords (const char string[])
{
    int i, wordCount = 0;
    int lookingForWord = 1, letterCount = 0;
    
    for ( i = 0; string[i] != '\0'; ++i )
        if ( string[i] != ' ' ) {
            ++letterCount;
            lookingForWord = 0;
        }
        else if ( !lookingForWord ) {
            ++wordCount;
            lookingForWord = 1;
        }
    
    if ( letterCount > 0 )
        ++wordCount;
    
    return wordCount;
}

int main(){
    char string[100];
    int count;
    printf("Enter a string: ");
    fgets(string, 100, stdin); // read a string from the keyboardcx dfv
    count = countWords(string);
    printf("The number of words in the string is %d", count);
    return 0;
}
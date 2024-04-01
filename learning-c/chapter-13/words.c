#include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 20



int main(void)
{
    char word[MAX_WORD_LEN + 1];
    char smallest_word[MAX_WORD_LEN + 1];
    char largest_word[MAX_WORD_LEN + 1];

    printf("Enter word: ");
    scanf("%20s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);

    while (strlen(word) != 4)
    {
        printf("Enter word: ");
        scanf("%20s", word);

        if (strcmp(word, smallest_word) < 0)
            strcpy(smallest_word, word);
        if (strcmp(word, largest_word) > 0)
            strcpy(largest_word, word);
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s", largest_word);

    return 0;
}





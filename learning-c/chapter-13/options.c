#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *p;
    int i;

    for (i = 1; i < argc; i++)
    {
        p = argv[i];
        if (strcmp(p, "-h") == 0) // usage
        {
            printf("Usage: %s [options]", argv[0]);
            return 0;
        }
        if (strcmp(p, "-v") == 0)
        {
            printf("Version 1.0");
            return 0;
        }
        if (strcmp(p, "-f") == 0)
        {
            printf("File: %s", argv[i + 1]);
            return 0;
        }
    }
    printf("No options specified");
    return 0;
}

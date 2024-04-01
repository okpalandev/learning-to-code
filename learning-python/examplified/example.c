#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define type aliases for clarity
typedef char* Command;
typedef char* Flag;
typedef int Value;

// Define a function to parse the command line arguments
void parse_args(int argc, char *argv[], Command *cmd, Flag *flag) {
    if (argc < 2) {
        fprintf(stderr, "Error: Command is required\n");
        exit(1);
    } else {
        *cmd = argv[1];
        *flag = (argc >= 3) ? argv[2] : NULL;
    }
}

// Define a function to execute a system command and read its output
Value execute_command(Command cmd, Flag flag) {
    FILE *fp;
    char buffer[1024];
    int file_count = 0;

    // Construct the command to execute
    char command[1024];
    if (flag) {
        sprintf(command, "%s %s", cmd, flag);
    } else {
        sprintf(command, "%s", cmd);
    }

    // Execute the command and read its output
    fp = popen(command, "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Failed to execute command\n");
        exit(1);
    }

    // Count the number of lines in the output (excluding the header)
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        file_count++;
    }

    pclose(fp);
    return file_count;
}

// Example usage
int main(int argc, char *argv[]) {
    Command cmd;
    Flag flag;
    parse_args(argc, argv, &cmd, &flag);
    Value result = execute_command(cmd, flag);
    printf("Result: %d\n", result);
    return 0;
}

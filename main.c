#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {

    char input[512];
    char *args[10];

    while (1) {
        printf("myshell> ");
        fgets(input, 512, stdin);

        size_t len = strlen(input);
        if (len > 0 && input[len-1] == '\n') {
            input[len-1] = '\0';
        }

        printf("The command: %s\n", input);
    }

    return 0;
}


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

        char *token = strtok(input, " ");
        int i = 0;
        while (token != NULL) {
            args[i] = token;
            i++;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;

        if (strcmp(args[0], "exit") == 0) {
            exit(0);
        }

        pid_t pid = fork();

        if (pid == 0) {
            execvp(args[0], args);
            perror("Failed to execute the command!");
            exit(1);
        }else if (pid < 0) {
            perror("Failed to fork");
        }else {
            wait(NULL);
        }

    }

    return 0;
}


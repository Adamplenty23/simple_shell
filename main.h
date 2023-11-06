#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <errno.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <fcntl.h>

#define BUF_SIZE 1024
#define PROMPT "$ "

/*Print Functions*/
int _putchar(char a);
void _printS(char *s);
void dis_prompt_user(void);

/*String helper function*/

int _putchar(char a);

#endif

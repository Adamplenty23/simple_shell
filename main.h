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
#define DELIM " \t\n"

/*Print Functions*/
int _putchar(char a);
void _printS(char *s);
void dis_prompt_user(void);

/*String helper function*/
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _atoi(char *s);
char *_strdup(char *str);
char **_token_gen(char *arg);
char *_getenvr(char *var_name, char **envr);
char *_pathget(char *cmd_name, char *all_paths);

#endif

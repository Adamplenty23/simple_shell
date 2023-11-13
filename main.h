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

extern char **environ;

/*Print Functions*/
int _putchar(char a);
void _printS(char *s);
void dis_prompt_user(void);
void printerror(char *name, char *comd, int idx);

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
char *_strchr(char *s, char c);
void rev_string(char *s);
int _isdigit(const char *c);
char *_itoa(int n);

/*Handle Environment Funtions*/
char *_getenvr(char *var_name, char **envr);
char *_pathget(char *cmd_name, char *paths);

/*Execution Functions*/
void _freearray(char **array);
int _do_execute(char **cmd, char **argv);

#endif

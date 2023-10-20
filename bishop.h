#ifndef BISHOP_H
#define BISHOP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>

#include "feranmi.h"

extern char **environ;



char *str_cat(char *destin, char *strsrc);
int atoi_(char *s);
int _strcmp(char *c1, char *c2);
void *realloc_(void *point, size_t old, size_t new);
int _strlen(char *s);
char *strptr(char *str1, char *str2);
char *_strcpy(char *s);
int writechar(char ch);
char **tokenizer(char *str, const char *delim);
char *numstr(int num);
int numb(int number);
int numeric(int num);
void beg(feranmi_t *mytype);
char *mergewords(char *word1, char *word2, char *word3, const char *deli);
char *readprompt(void);
void releasememory(void *point);
void releasepointermem(void *point);
void sighand(int p);
void interactive(feranmi_t *mytype);
int print(char *m);
void getinput(feranmi_t *mytype);
void pattanal(feranmi_t *mytype, char **ar);
void patharray(char *path, feranmi_t *mytype);
void check_prompt(char **ar, feranmi_t *mytype, char *buff);
int confirm_builtin(feranmi_t *mytype, char **ar);
int fileorbin(char *file);


#endif

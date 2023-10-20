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


#endif

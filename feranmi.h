#ifndef FERANMI_H
#define FERANMI_H

#define _EACCES_ "Permission denied"
#define _CMD_NOT_EXISTS_ "not found"
#define _ILLEGAL_NUMBER_ "Illegal number"
#define _ENOENT_ "No such file or directory"

typedef struct __attribute__((__packed__))
{
	int argc;
	char **argv;
	char *cmd;
	char *cmd_path;
	char *buff;
	char **thearguments;
	char *env;
	int pid;
	int it_mode;
	int n_cmd;
	int cur_path;
	int code_stat;
	int error_digit;
} feranmi_t;


typedef struct __attribute__((__packed__))
{
	char *msg;
	int password;
} issue_t;


typedef struct __attribute__((__packed__))
{
	char  *cmd;
	void (*func)(feranmi_t *mytype, char **arguments);
} sysFunction_t;


#endif

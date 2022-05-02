#ifndef MAIN_H
#define MAIN_H

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*  close */
#include <unistd.h>

/* malloc, free */
#include <stdlib.h>

/* printf */
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif

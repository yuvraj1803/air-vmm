// Copyright (c) 2026 Yuvraj Sakshith <ysakshith@gmail.com>
#ifndef PR_H
#define PR_H

#include <stdio.h>

#define pr_err(fmt, ...) \
    fprintf(stderr, "[ERROR] %s:%d: " fmt, __FILE__, __LINE__, ##__VA_ARGS__)

#endif

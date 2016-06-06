#include <stdio.h>
#include "dyndebug.h"

#define LOG_DEBUG(fmt, ...) \
    DYNDBUG_PRINT(fprintf, stderr, fmt, ##__VA_ARGS__)

int main(void)
{
    LOG_DEBUG("test%d\n", 1);

    toggle_dbgmsg("main.c");

    LOG_DEBUG("test%d\n", 2);

    return 0;
}

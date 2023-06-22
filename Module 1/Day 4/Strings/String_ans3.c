#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char TimeString[] = "12:34:56"; 
    char *token;
    unsigned long hours, minutes, seconds;
    unsigned long TotalSeconds;

    token = strtok(TimeString, ":");
    hours = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);

    TotalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total seconds: %lu\n", TotalSeconds);

    return 0;
}

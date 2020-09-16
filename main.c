#include <stdio.h>
#include <time.h>
#include <math.h>

#define MILLISECONDS_TO_SECONDS_CONVERSION 1.0e6

int main(int argc, char *argv[])
{

    char *buffer = NULL;
    size_t size;

    struct timespec start, current;
    unsigned long long seconds, milliseconds;
    clock_gettime(CLOCK_REALTIME, &start);

    printf("[S:MS]\n");

    while (getline(&buffer, &size, stdin) != -1)
    {
        clock_gettime(CLOCK_REALTIME, &current);
        seconds = (current.tv_sec - start.tv_sec);
        milliseconds = (current.tv_nsec / (long) round(MILLISECONDS_TO_SECONDS_CONVERSION)); // Convert nanoseconds to milliseconds
        printf("[%llu:%llu] %s", seconds, milliseconds, buffer);
    }
}
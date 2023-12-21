#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // for (int i = 0; i <= 133; i++)
    // {
    //     errno = i;
    //     perror("Error");
    // }

    int fd = 3;
    if (close(fd) == -1)
    {
        perror("Error");
        strerror(errno);
    }
    return 0;
}

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int i = 0;
    int j = 0;
    int size = 0;
    char buf[64] = {0};

    j = open("../../token", O_RDONLY);
    size = read(j, buf, 64);
    while (buf[i])
    {
        printf("%c",buf[i] - i);
        i++;
    }
    printf("\n");
    return (0);
}

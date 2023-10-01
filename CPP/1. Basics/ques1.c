// create a file using open system call then write inside that file "IwillbeplacedinGoogleandAmazon"

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int fd = open("ques1.txt", O_CREAT | O_WRONLY, 0777);
    write(fd, "IwillbeplacedinGoogleandAmazon", 30);
    close(fd);

    // then delete the characters "inGoogleand" from the string using lseek system call

    fd = open("ques1.txt", O_RDWR);
    lseek(fd, 10, SEEK_SET);
    write(fd, "inGoogleand", 0);
    close(fd);

    // then read the string from the file and print it on the console

    fd = open("ques1.txt", O_RDONLY);
    char str[30];
    read(fd, str, 30);
    printf("%s\n", str);
    close(fd);

    return 0;
}

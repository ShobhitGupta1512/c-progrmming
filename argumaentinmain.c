#include <stdio.h>
int i;
int main(int argc, char *argv[])
{
    printf("program name is :%s", argv[0]);
    if (argc == 1)
    {
        printf("\n no extra command line argument passed other than program name");
    }
    if (argc >= 2)
    {
        printf("\n no of element passed:%d", argc);
        printf("\n\n\nfollowing are the command line arguments passed");
        for (i = 0; i < argc; i++)
        {
            printf("\n argv[%d]:%s", i, argv[i]);
        }
    }
    return 0;
}
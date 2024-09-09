#include "minishell.h"

int main()
{
    char buffer[1024];
    char *pwd;
    pwd = getcwd(buffer, sizeof(buffer));
    if (pwd == NULL)
        perror(NULL);
    else 
        printf("%s\n", pwd);
}
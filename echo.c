
#include "minishell.h"

void    echo_arguments(char **av, int ac)
{
        int i;
        int j;

        i = 1;
        j = 0;
        while(i < ac)
        {
            while(av[i][j])
                write(1, &av[i][j++], 1);
            j = 0;
            if (ac != i + 1)
                write(1, " ", 1);
            i++;
        }
        write(1, "\n", 1);
}

void    echo_arguments1(char **av, int ac)
{
        int i;
        int j;

        i = 2;
        j = 0;
        while(i < ac)
        {
            while(av[i][j])
                write(1, &av[i][j++], 1);
            j = 0;
            if (ac != i + 1)
                write(1, " ", 1);
            i++;
        }
}



int main(int ac, char **av)
{
    char *argv1 = av[1];

    if(ac == 1)
    {
        if (strncmp(av[0], "./a.out", 7) == 0)
            write(1, "\n", 1);
        return(0);
    }
    if (av[1][0] == '-')
    {
        if (ft_strncmp(argv1, "-n", 2) == 0)
            echo_arguments1(av, ac);
        else
            printf("%s\n", av[2]);
    }
    else
        echo_arguments(av, ac);
    return(0);
}
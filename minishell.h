#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

// ------echo------
void    echo_arguments(char **av, int ac);
void    echo_arguments1(char **av, int ac);
//------pwd-------
void pwd(char *str);

#endif
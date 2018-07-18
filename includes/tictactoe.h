#ifndef TICTACTOE_H
# define TICTACTOE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

void	print_map(char *p);
void	play(void);
void	play_ai(void);

char	*play_you(char *tab,char c);
char	*init_tab(void);
char	*dumb_ai(char *tab, char c);

int		ft_rand(int n);
int		select_player(int error);
int		gameover(char *tab);
int		cmp(char a, char b, char c);
int		who_win(char c);
int		checkwinner(char *tab);

#endif

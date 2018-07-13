#ifndef TICTACTOE_H
# define TICTACTOE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>


int		select_player(int error);
void	print_map(char *p);
char	*init_tab(void);
char	*play_you(char *tab,char c);
int		gameover(char *tab);
void	play(void);
int		cmp(char a, char b, char c);
int		who_win(char c);
int		checkwinner(char *tab);

#endif

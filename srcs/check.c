#include "../includes/tictactoe.h"

int		cmp(char a, char b, char c)
{
	if (a == b && b == c && a == c)
		return(1);
	else 
		return(0);
}

int		who_win(char c)
{
	if(c == 'X')
		return(2);
	else if (c == 'O')
		return(1);
}

int		checkwinner(char *tab)
{
	if (cmp(tab[0],tab[1],tab[2]) == 1)
		return(who_win(tab[0]));
	if (cmp(tab[3],tab[4],tab[5]) == 1)
		return(who_win(tab[3]));
	if (cmp(tab[6],tab[7],tab[8]) == 1)
		return(who_win(tab[6]));
	if (cmp(tab[0],tab[3],tab[6]) == 1)
		return(who_win(tab[0]));
	if (cmp(tab[1],tab[4],tab[7]) == 1)
		return(who_win(tab[1]));
	if (cmp(tab[2],tab[5],tab[8]) == 1)
		return(who_win(tab[2]));
	if (cmp(tab[0],tab[4],tab[8]) == 1)
		return(who_win(tab[4]));
	if (cmp(tab[6],tab[4],tab[2]) == 1)
		return(who_win(tab[4]));
	return(0);
}

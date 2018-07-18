#include "../includes/tictactoe.h"

int		about_to_win(char c, char d, char e, char enemy)
{
	if ((c == enemy && d == enemy) || (c == enemy && e == enemy) || (d == enemy && e == enemy))
	{
		if (c == ' ')
			return(1);
		else if (d == ' ')
			return(2);
		else if (e == ' ')
			return(3);
		else
			return(0);
	}
	return(0);
}


char *dumb_ai(char *tab, char c)
{
	int i;
	char e = (c == 'X' ? 'O' : 'X');
	while (1)
	{
		if (about_to_win(tab[0],tab[1],tab[2], c) != 0)
		{
			if (about_to_win(tab[0],tab[1],tab[2], c) == 1)
			{
				tab[0] = c;
				break;
			}
			if (about_to_win(tab[0],tab[1],tab[2], c) == 2)
			{
				tab[1] = c;
				break;
			}
			if (about_to_win(tab[0],tab[1],tab[2], c) == 3)
			{
				tab[2] = c;
				break;
			}
		}
		else if (about_to_win(tab[3],tab[4],tab[5], c) != 0)
		{
			if (about_to_win(tab[3],tab[4],tab[5], c) == 1)
			{
				tab[3] = c;
				break;
			}
			if (about_to_win(tab[3],tab[4],tab[5], c) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[3],tab[4],tab[5], c) == 3)
			{
				tab[5] = c;
				break;
			}
		}
		else if (about_to_win(tab[6],tab[7],tab[8], c) != 0)
		{
			if (about_to_win(tab[6],tab[7],tab[8], c) == 1)
			{
				tab[6] = c;
				break;
			}
			if (about_to_win(tab[6],tab[7],tab[8], c) == 2)
			{
				tab[7] = c;
				break;
			}
			if (about_to_win(tab[6],tab[7],tab[8], c) == 3)
			{
				tab[8] = c;
				break;
			}
		}
		else if (about_to_win(tab[0],tab[3],tab[6], c) != 0)
		{
			if (about_to_win(tab[0],tab[3],tab[6], c) == 1)
			{
				tab[0] = c;
				break;
			}
			if (about_to_win(tab[0],tab[3],tab[6], c) == 2)
			{
				tab[3] = c;
				break;
			}
			if (about_to_win(tab[0],tab[3],tab[6], c) == 3)
			{
				tab[6] = c;
				break;
			}
		}
		else if (about_to_win(tab[1],tab[4],tab[7], c) != 0)
		{
			if (about_to_win(tab[1],tab[4],tab[7], c) == 1)
			{
				tab[1] = c;
				break;
			}
			if (about_to_win(tab[1],tab[4],tab[7], c) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[1],tab[4],tab[7], c) == 3)
			{
				tab[7] = c;
				break;
			}
		}
		else if (about_to_win(tab[2],tab[5],tab[8], c) != 0)
		{
			if (about_to_win(tab[2],tab[5],tab[8], c) == 1)
			{
				tab[2] = c;
				break;
			}
			if (about_to_win(tab[2],tab[5],tab[8], c) == 2)
			{
				tab[5] = c;
				break;
			}
			if (about_to_win(tab[2],tab[5],tab[8], c) == 3)
			{
				tab[8] = c;
				break;
			}
		}
		else if (about_to_win(tab[0],tab[4],tab[8], c) != 0)
		{
			if (about_to_win(tab[0],tab[4],tab[8], c) == 1)
			{
				tab[0] = c;
				break;
			}
			if (about_to_win(tab[0],tab[4],tab[8], c) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[0],tab[4],tab[8], c) == 3)
			{
				tab[8] = c;
				break;
			}
		}
		else if (about_to_win(tab[2],tab[4],tab[6], c) != 0)
		{
			if (about_to_win(tab[2],tab[4],tab[6], e) == 1)
			{
				tab[2] = c;
				break;
			}
			if (about_to_win(tab[2],tab[4],tab[6], c) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[2],tab[4],tab[6], c) == 3)
			{
				tab[6] = c;
				break;
			}
		}
		else if (about_to_win(tab[0],tab[1],tab[2], e) != 0)
		{
			if (about_to_win(tab[0],tab[1],tab[2], e) == 1)
			{
				tab[0] = c;
				break;
			}
			if (about_to_win(tab[0],tab[1],tab[2], e) == 2)
			{
				tab[1] = c;
				break;
			}
			if (about_to_win(tab[0],tab[1],tab[2], e) == 3)
			{
				tab[2] = c;
				break;
			}
		}
		else if (about_to_win(tab[3],tab[4],tab[5], e) != 0)
		{
			if (about_to_win(tab[3],tab[4],tab[5], e) == 1)
			{
				tab[3] = c;
				break;
			}
			if (about_to_win(tab[3],tab[4],tab[5], e) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[3],tab[4],tab[5], e) == 3)
			{
				tab[5] = c;
				break;
			}
		}
		else if (about_to_win(tab[6],tab[7],tab[8], e) != 0)
		{
			if (about_to_win(tab[6],tab[7],tab[8], e) == 1)
			{
				tab[6] = c;
				break;
			}
			if (about_to_win(tab[6],tab[7],tab[8], e) == 2)
			{
				tab[7] = c;
				break;
			}
			if (about_to_win(tab[6],tab[7],tab[8], e) == 3)
			{
				tab[8] = c;
				break;
			}
		}
		else if (about_to_win(tab[0],tab[3],tab[6], e) != 0)
		{
			if (about_to_win(tab[0],tab[3],tab[6], e) == 1)
			{
				tab[0] = c;
				break;
			}
			if (about_to_win(tab[0],tab[3],tab[6], e) == 2)
			{
				tab[3] = c;
				break;
			}
			if (about_to_win(tab[0],tab[3],tab[6], e) == 3)
			{
				tab[6] = c;
				break;
			}
		}
		else if (about_to_win(tab[1],tab[4],tab[7], e) != 0)
		{
			if (about_to_win(tab[1],tab[4],tab[7], e) == 1)
			{
				tab[1] = c;
				break;
			}
			if (about_to_win(tab[1],tab[4],tab[7], e) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[1],tab[4],tab[7], e) == 3)
			{
				tab[7] = c;
				break;
			}
		}
		else if (about_to_win(tab[2],tab[5],tab[8], e) != 0)
		{
			if (about_to_win(tab[2],tab[5],tab[8], e) == 1)
			{
				tab[2] = c;
				break;
			}
			if (about_to_win(tab[2],tab[5],tab[8], e) == 2)
			{
				tab[5] = c;
				break;
			}
			if (about_to_win(tab[2],tab[5],tab[8], e) == 3)
			{
				tab[8] = c;
				break;
			}
		}
		else if (about_to_win(tab[0],tab[4],tab[8], e) != 0)
		{
			if (about_to_win(tab[0],tab[4],tab[8], e) == 1)
			{
				tab[0] = c;
				break;
			}
			if (about_to_win(tab[0],tab[4],tab[8], e) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[0],tab[4],tab[8], e) == 3)
			{
				tab[8] = c;
				break;
			}
		}
		else if (about_to_win(tab[2],tab[4],tab[6], e) != 0)
		{
			if (about_to_win(tab[2],tab[4],tab[6], e) == 1)
			{
				tab[2] = c;
				break;
			}
			if (about_to_win(tab[2],tab[4],tab[6], e) == 2)
			{
				tab[4] = c;
				break;
			}
			if (about_to_win(tab[2],tab[4],tab[6], e) == 3)
			{
				tab[6] = c;
				break;
			}
		}
		else
		{
			i = ft_rand(9) - 1;
			if (tab[i] == ' ')
			{
				tab[i] = c;
				break;
			}
			else
			{
				;
			}
		}
	}
	return(tab);
}

int		ft_rand(int n)
{
	unsigned int seed;
	read(open("/dev/urandom", O_RDONLY), &seed, sizeof(seed));
	int rand = seed % n;
	return(rand + 1);
}

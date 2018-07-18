#include "../includes/tictactoe.h"

char	*play_you(char *tab,char c)
{
	char sym;
	int ch;
	int place;
	printf("1 2 3\n");
	printf("4 5 6\n");
	printf("7 8 9\n\n");
	printf("%s\n", "Select where you wanna put your symbol");
	scanf("%c", &sym);
	while ((ch = getchar()) != '\n' && ch != EOF);
	if ((sym == '1') || (sym == '2') || (sym == '3') || (sym == '4') ||
		(sym == '5') || (sym == '6') || (sym == '7') || (sym == '8') ||
		(sym == '9'))
	{
		place = sym - 48;
		if(tab[place - 1] != ' ')
		{
			printf("%s\n\n", "You can't place on another symbol!");
			play_you(tab, c);
		}
		else
		{
			tab[place - 1] = c;
			return(tab);
		}
	}
	else
		play_you(tab, c);
}


int		gameover(char *tab)
{
	if(!strchr(tab,' '))
		return (1);
}

void	play(void)
{
	int youare = 0;
	youare = select_player(0);
	char *tab;
	int turn = 0;
	tab = init_tab();
	if (youare == 1)
	{
		while(1)
		{
			print_map(tab);
			tab = play_you(tab, 'O');
			turn++;
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
			tab = play_you(tab, 'X');
			turn++;
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
		}
	}
	else if (youare == 2)
	{
		while(1)
		{
			print_map(tab);
			tab = play_you(tab, 'O');
			turn++;
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
			tab = play_you(tab, 'X');
			turn++;
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
		}
	}
	else
		printf("error\n");
	int winner = checkwinner(tab);
	if(winner == 1)
		printf("%s\n\n", "Player O Wins --- Player X Lost");
	else if (winner == 2)
		printf("%s\n\n", "Player X Wins --- Player O Lost\n");
	else
		printf("%s\n\n", "Draw");
}

void	play_ai(void)
{
	int youare = 0;
	youare = select_player(0);
	char *tab;
	int turn = 0;
	tab = init_tab();
	print_map(tab);
	if (youare == 1)
	{
		while(1)
		{
			tab = play_you(tab, 'O');
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
			tab = dumb_ai(tab, 'X');
			turn++;
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
		}
	}
	else if (youare == 2)
	{
		while(1)
		{
			printf("\nturn ai= %d\n", turn);
			tab = dumb_ai(tab, 'O');
			turn++;
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
			tab = play_you(tab, 'X');
			print_map(tab);
			if (gameover(tab) == 1 || checkwinner(tab) == 1 || checkwinner(tab) == 2)
				break;
		}
	}
	else
		printf("error\n");
	int winner = checkwinner(tab);
	if(winner == 1)
		printf("%s\n\n", "Player O Wins --- Player X Lost");
	else if (winner == 2)
		printf("%s\n\n", "Player X Wins --- Player O Lost\n");
	else
		printf("%s\n\n", "Draw");
}

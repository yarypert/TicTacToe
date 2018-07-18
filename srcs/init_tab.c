#include "../includes/tictactoe.h"

int		select_player(int error)
{
	if(error == 1)
		printf("%s\n\n", "Please enter valid command!");
	char input;
	int ch;
	printf("%s\n", "Do you want to play first? Y / N ");
	scanf("%c", &input);
	while ((ch = getchar()) != '\n' && ch != EOF);
	if(input == 'y' || input == 'Y')
		return(1);
	if(input == 'n' || input == 'N')
		return(2);
	else
		select_player(1);
}

void	print_map(char *p)
{
	system("clear");
	printf("\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", p[0], p[1], p[2]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", p[3], p[4], p[5]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", p[6], p[7], p[8]);
	printf("   |   |   \n");
	printf("\n");
}

char	*init_tab(void)
{
	int i = 0;
	char *	pieces;
	pieces = (char *)malloc(sizeof(char)*9 +1);
	while (i < 9)
	{
		pieces[i] = ' ';
		i++;
	}
	pieces[9] = '\0';
	return (pieces);
}

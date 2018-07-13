#include "./tictactoe.h"
/*
int		rand(void)
{
	unsigned int seed;
	read(open("/dev/urandom", O_RDONLY), &seed, sizeof(seed));
	srand(seed);
}

char	*play_ia_auto(char *tab ,int turn)
{
	if (turn == 0)
		;
}
*/

int main(void)
{
	char input;
	int ch;
	int game = 1;
	while(game == 1)
	{
		play();
		label1:;
		printf("%s\n", "Do you want to play again? Y / N");
		printf("%s\n", "If you type multiple characters only the first one will be used.");
		scanf("%c", &input);
		while((ch = getchar()) != '\n' && ch != EOF);
		if ((input == 'y') || (input == 'Y'))
			game = 1;
		else if ((input == 'n') || (input == 'N'))
			game = 0;
		else
			goto label1;
	}
	return(0);
}

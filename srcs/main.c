#include "../includes/tictactoe.h"

int main(void)
{
	char input;
	int ch;
	char input2;
	int ch2;
	char input3;
	int ch3;
	int game = 1;
	label3:;
	system("clear");
	printf("%s\n", "\033[1;31m/!\\ Important!\n\nIf you type multiple characters only the first one will be used. Do you understand ? \033[1;32mY / N\033[0m");
	scanf("%c", &input3);
	while((ch3 = getchar()) != '\n' && ch3 != EOF);
	if (input3 == 'Y' || input3 == 'y')
		;
	else if (input3 == 'N' || input3 == 'n')
		exit(0);
	else
		goto label3;
	while(game == 1)
	{
		label2:;
		printf("%s\n", "Do you want to play against an AI (1) or a friend (2)?");
		scanf("%c", &input2);
		while((ch2 = getchar()) != '\n' && ch2 != EOF);
		if (input2 == '1')
			play_ai();
		else if (input2 == '2')
			play();
		else
			goto label2;
		label1:;
		printf("%s\n", "Do you want to play again? Y / N");
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

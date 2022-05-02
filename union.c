#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	int i;
	int j;
	int check;
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		check = 0;
		while (argv[1][j] && j < i)
		{
			if ( argv[1][j] == argv[1][i])
			{
				check = 1;
			}
			j++;
		}
		if (check != 1)
			write (1, &argv[1][i], 1);
		i++;
	}
	i = 0;
	while (argv[2][i])
	{
		j = 0;
		check = 0;
		while (argv[2][j] && j < i)
		{
			if ( argv[2][j] == argv[2][i])
			{
				check = 1;
			}
			j++;
		}
		j = 0;
		while (argv[1][j])
		{
			if ( argv[1][j] == argv[2][i])
			{
				check = 1;
			}
			j++;
		}
		if (check != 1)
			write (1, &argv[2][i], 1);
		i++;
	}
	write(1,"\n",1);
}

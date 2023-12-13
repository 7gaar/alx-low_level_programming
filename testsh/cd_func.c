#include "shell.h"
/**
 * cd - ghjkf
 * @argv: fhihg
 * Return: fhjjh
 */
int cd(char **argv, int n, char *p_name)
{
	int i;
	char *home = NULL;

	home = our_getenv("HOME");
	if (home == NULL)
    {
		perror("getenv");
		return (-1);
	}
    if (argv[1] == NULL || (argv[1][0] == '-' && argv[1][1] == '\0'))
	{
		i = chdir(home);
		return(-1);
  	}
	else
	{
		i = chdir(argv[1]);
    if (i != 0)
	{
	printf("%s: %d: %s: not found\n", p_name, n, argv[0]);
	  return(-1);
    }
  }
  return (1);
}

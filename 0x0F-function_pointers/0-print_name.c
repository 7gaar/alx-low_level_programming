#include "FUN_H"
/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: a pointe to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;

	 f(name);
}

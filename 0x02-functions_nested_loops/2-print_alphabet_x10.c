#include "main.ih"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{

	char letter;

	for letter = 'a'; letter <= 'z'; letter++
			_putchar(letter);

	_putchar('\n');

}

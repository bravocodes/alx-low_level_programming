<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

=======
>>>>>>> 9d7ffc43e84f1a960e83acdf9ad24d0f687be96f
/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

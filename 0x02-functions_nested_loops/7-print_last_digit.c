/**
 * print_last_digit - evaluates an int parameter
 * @a: requires an int value
 * Return: returns value of the result
 */
int print_last_digit(int a)
{
	int result;

	if (a < 0)
	{
		result = (a % 10) * -1;
	}
	else if (a >= 0)
	{
		result = a % 10;
	}

	return (result);

}

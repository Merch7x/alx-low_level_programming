/**
 * reverse_array - reverses the array
 * @a: the array to be reversed
 * @n: the size of the array
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}


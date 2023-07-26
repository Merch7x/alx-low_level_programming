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

	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[n - 1];
		a[n - 1] = t;
		i++;
		n--;
	}
}


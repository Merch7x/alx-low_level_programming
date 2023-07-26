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
		if (n == 0)
		{
			break;
		}
		else
		{
			t = a[i];
			a[i] = a[n - 1];
			a[n - 1] = t;
			n--;
		}
	}
}


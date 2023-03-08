/**
 * square_root_helper - Helper function to find the square root of a number
 * @n: number to find the square root of
 * @start: start of the search range
 * @end: end of the search range
 * Return: natural square root of n
 */
int square_root_helper(int n, int start, int end)
{
	unsigned long int mid;
	unsigned long int square;

	if (start > end)
	{
		return (-1);
	}
	mid = start + (end - start) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (square_root_helper(n, mid + 1, end));
	}
	else
	{
		return (square_root_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return ((int)(square_root_helper(n, 0, n)));
	}
}

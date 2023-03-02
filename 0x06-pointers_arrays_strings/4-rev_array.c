/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}

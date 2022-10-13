/**
 * int_index - return the index of the number.
 *
 * @array: array param
 * @size: size param
 * @cmp: cmp param
 *
 * Return:
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

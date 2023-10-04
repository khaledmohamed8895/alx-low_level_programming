#include <main.h>

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: name of file to read
 * @letters: number bytes to raed
 *
 * Return: numbers byts read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	close(o);
	return (w);
}
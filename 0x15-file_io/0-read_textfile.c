#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: No of letters to read
 *
 * Return: actual number of letters it could read and print
 *       if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  FILE *fd;
  char *buff;
  ssize_t num;

  fd = fopen(filename, "r");
  if (fd == NULL)
    return (0);

  buff = (char *)malloc(letters + 1);
  if (buff == NULL)
    {
      fclose(fd);
      return (0);
    }

  num = fread(buff, sizeof(char), letters, fd);
  if (num == 0)
    {
      free(buff);
      fclose(fd);
      return (0);
    }
  buff[num] = '\0';

  if (write(STDOUT_FILENO, buff, num) != num)
    {
      free(buff);
      fclose(fd);
      return (0);
    }

  free(buff);
  fclose(fd);

  return (num);
}

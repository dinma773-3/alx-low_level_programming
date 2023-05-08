#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int i;
  int j;
  int len = 0;

  if (filename == NULL)
    return -1;

  if (text_content != NULL)
    {
      for (len = 0; text_content[len];)
	len++;
    }

  i = open(filename, O_WRONLY | O_APPEND);
  j = write (i, text_content, len);

  if (i == -1 || j == -1)
    return -1;

  close(i);
  return 1;
}

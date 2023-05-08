#include "main.h"
#include <string.h>

/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return 1 0n success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
  int fp, num;
  ssize_t len;

  if (filename == NULL)
    return (-1);

  fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
  if (fp < 0)
    return (-1);

  if (text_content != NULL)
    {
      len = strlen(text_content);
      num = write(fp, text_content,len);
      if (num != len)
        {
          close(fp);
          return (-1);
        }
    }

  close(fp);
  return (1);
}

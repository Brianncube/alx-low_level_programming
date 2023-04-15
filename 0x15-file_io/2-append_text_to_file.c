#include "main.h"

/**
* append_text_to_file - adds text at the file's end
* @filename: A pointer to the file.
* @text_content: String to add at the end of the file.
* Return: If the function fails - -1.
* If the file does not exist write permissions - -1.
* Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, wd;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	wd = write(o, text_content, l);

	if (o == -1 || wd == -1)
		return (-1);

	close(o);

	return (1);
}


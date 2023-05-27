#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - C entry function
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char **argv)
{
	char *input = (char *)argv[1];
	char *cmd;
	off_t file_size;
	char buffer[] = " | awk 'NR>=1 && NR<=8 || NR==11' | sed 's/[[:space:]]*$//'";
	int tmp_file, fdr;

	if (argc != 2)
	{
		perror("Usage: elf_header elf_filename\n");
		return (0);
	}

	tmp_file = open("temp", O_WRONLY | O_CREAT | O_APPEND, 0666);
	if (tmp_file == -1)
		return (1);
	write(tmp_file, "readelf -h ", 11);
	write(tmp_file, input, strlen(input));
	write(tmp_file, buffer, sizeof(buffer));
	close(tmp_file);

	tmp_file = open("temp", O_RDONLY);
	if (tmp_file == -1)
		return (1);

	file_size = lseek(tmp_file, 0, SEEK_END);
	lseek(tmp_file, 0, SEEK_SET);

	cmd = malloc(file_size + 1);
	fdr = read(tmp_file, cmd, file_size);
	if (fdr == -1)
	{
		close(tmp_file);
		free(cmd);
	}
	cmd[fdr] = '\0';
	close(tmp_file);
	system(cmd);
	free(cmd);
	system("rm temp");
	return (0);
}

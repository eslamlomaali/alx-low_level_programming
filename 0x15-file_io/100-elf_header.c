#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void c_1(unsigned char *e);
void p_1(unsigned char *e);
void p_2(unsigned char *e);
void p_3(unsigned char *e);
void p_4(unsigned char *e);
void p_5(unsigned char *e);
void p_6(unsigned char *e);
void p_7(unsigned int t, unsigned char *e);
void p_8(unsigned long int y, unsigned char *e);
void exit(int e);

/**
 * c_1 - file is an ELF file or not
 * @e: A pointer.
 *
 * Description: If the file is not an ELF file.
 */
void c_1(unsigned char *e)
{
	int x;

	for (x = 0; x < 4; x++)
	{
		if (e[x] != 127 &&
		    e[x] != 'E' &&
		    e[x] != 'L' &&
		    e[x] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * p_1 - Prints the magic num
 * @e: A pointer
 *
 * Description: magic num
 */
void p_1(unsigned char *e)
{
	int x;

	printf("  Magic:   ");

	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", e[x]);

		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * p_2 - Prints the class
 * @e: A pointer
 */
void p_2(unsigned char *e)
{
	printf("  Class:                             ");

	switch (e[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e[EI_CLASS]);
	}
}

/**
 * p_3 - Prints the data
 * @e: A pointer
 */
void p_3(unsigned char *e)
{
	printf("  Data:                              ");

	switch (e[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big\n");
		break;
	default:
		printf("<unknown: %x>\n", e[EI_CLASS]);
	}
}

/**
 * p_4 - Prints the version
 * @e: A pointer
 */
void p_4(unsigned char *e)
{
	printf("  Version:                           %d",
	       e[EI_VERSION]);

	switch (e[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * p_5 - Prints the OS
 * @e: A pointer
 */
void p_5(unsigned char *e)
{
	printf("  OS/ABI:                            ");

	switch (e[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e[EI_OSABI]);
	}
}

/**
 * p_6 - Prints the abi
 * @e: pointer
 */
void p_6(unsigned char *e)
{
	printf("  ABI Version:                       %d\n",
	       e[EI_ABIVERSION]);
}

/**
 * p_7 - Prints the type
 * @t: type.
 * @e: A pointer
 */
void p_7(unsigned int t, unsigned char *e)
{
	if (e[EI_DATA] == ELFDATA2MSB)
		t >>= 8;

	printf("  Type:                              ");

	switch (t)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", t);
	}
}

/**
 * p_8 - entry point
 * @y: address
 * @e: pointer
 */
void p_8(unsigned long int y, unsigned char *e)
{
	printf("  Entry point address:               ");

	if (e[EI_DATA] == ELFDATA2MSB)
	{
		y = ((y << 8) & 0xFF00FF00) |
			  ((y >> 8) & 0xFF00FF);
		y = (y << 16) | (y >> 16);
	}

	if (e[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)y);

	else
		printf("%#lx\n", y);
}

/**
 * exit - Closes file.
 * @e: The file
 *
 * Description: file cannot be closed
 */
void exit(int e)
{
	if (close(e) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't exit fd %d\n", e);
		exit(98);
	}
}

/**
 * my_main - the information
 * @ac: The number of args
 * @av: array
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an elf err.
 */
int my_main(int __attribute__((__unused__)) ac, char *av[])
{
	Elf64_Ehdr *h;
	int a, b;

	a = open(av[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	b = read(a, h, sizeof(Elf64_Ehdr));
	if (b == -1)
	{
		free(h);
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}

	c_1(h->e);
	printf("ELF Header:\n");
	p_1(h->e);
	p_2(h->e);
	p_3(h->e);
	p_4(h->e);
	p_5(h->e);
	p_6(h->e);
	p_7(h->t, h->e);
	p_8(h->y, h->e);

	free(h);
	close_elf(a);
	return (0);
}

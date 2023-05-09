#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ELF_MAGIC "\177ELF"
#define BUF_SIZE 64

void print_magic(unsigned char *e_ident);
void print_class(unsigned char e_ident);
void print_data(unsigned char e_ident);
void print_version(unsigned char e_ident);
void print_osabi(unsigned char e_ident);
void print_abiversion(unsigned char e_ident);
void print_type(Elf64_Half e_type);
void print_entry(Elf64_Addr e_entry);

/**
 * check_elf - checks if the file is an elf file
 * @e_ident: pointer to the elf
 */
void check_elf(unsigned char *e_ident)
{
  int idx;

  for (idx = 0; idx < 4; idx++)
    {
      if (e_ident[idx] != 127 &&
	  e_ident[idx] != 'E' &&
	  e_ident[idx] != 'L' &&
	  e_ident[idx] != 'F')
	{
	  dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	  exit(98);
	}
    }
}

/**
 * print_magic - prints the maic numbers of the elf header
 * @e_ident: pointer to an array containing elf magic nmubers
 */
void print_magic(unsigned char *e_ident)
{
  int idx;

  printf(" Magic: ");

  for (idx = 0; idx < EI_NIDENT; idx++)
    {
      printf("%02x", e_ident[idx]);

      if (idx == EI_NIDENT - 1)
	printf("\n");
      else
	printf(" ");
    }
}

/**
 * print_class - prints the class o he elf header
 * @e_ident: pointer to the array of elf class
 */
void print_class(unsigned char *e_ident)
{
  printf(" Class: ");

  switch (e_ident[EI_CLASS])
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
      printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_data - prints the data of an elf header
 * @e_ident: pointer to the elf headers e_ident field
 */
void print_data(unsigned char *e_ident)
{
  printf(" Data: ");

  switch (e_ident[EI_DATA])
    {
    case ELFDATANONE:
      printf("none\n");
      break;
    case ELFDATA2LSB:
      printf("2's complement, little endian\n");
      break;
    case ELFDATA2MSB:
      printf("2's complement, big endian\n");
      break;
    default:
      printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_version - prints the version of the elf header
 * @e_ident:
 */
void print_version(unsigned char *e_ident)
{
  printf(" Version: %d",
	 e_ident[EI_VERSION]);

  switch (e_ident[EI_VERSION])
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
 * print_osabi - prints OS/ABI of an elf header
 * @e_ident: pointer to an array containing the elf version
 */
void print_osabi(unsigned char *e_ident)
{
  printf(" OS/ABI: ");

  switch (e_ident[EI_OSABI])
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
      printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }
}

/**
 * print_abi - print the ABI version of an elf header
 * @e_ident: pointer to an array containing the elf ABI version
 */
void print_abi(unsigned char *e_ident)
{
  printf(" ABI Version: %d\n",
	 e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints type of an elf header
 * @e_type: elf type
 * @e_ident: pointer to an array containing elf class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
  if (e_ident[EI_DATA] == ELFDATA2MSB)
    e_type >>= 8;

  printf(" Type: ");

  switch (e_type)
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
      printf("<unknown: %x>\n", e_type);
    }
}

/**
 * print_entry - prints the entry point of an elf
 * @e_entry: address of the elf entry point
 * @e_ident: pointer to an entry containing the elf class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
  printf(" Entry point address: ");

  if (e_ident[EI_DATA] == ELFDATA2MSB)
    {
      e_entry = ((e_entry << 8) & 0xFF00FF00) |
	((e_entry >> 8) & 0xFF00FF);
      e_entry = (e_entry << 16) | (e_entry >> 16);
    }

  if (e_ident[EI_CLASS] == ELFCLASS32)
    printf("%#x\n", (unsigned int)e_entry);

  else
    printf("%#lx\n", e_entry);
}

/**
 * close_elf - closes elf file
 * @elf: file descriptor of the elf file
 */
void close_elf(int elf)
{
  if (close(elf) == -1)
    {
      dprintf(STDERR_FILENO,
	      "Error: Can't close fd %d\n", elf);
      exit(98);
    }
}

/**
 * main - display information contained in the elf header
 * @argc: number of argument supplied to the program
 * @argv: array of pointer to argument
 *
 * Return success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
  Elf64_Ehdr *ptr;
  int i, j;

  i = open(argv[1], O_RDONLY);
  if (i == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
      exit(98);
    }
  ptr = malloc(sizeof(Elf64_Ehdr));
  if (ptr == NULL)
    {
      close_elf(i);
      dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
      exit(98);
    }
  j = read(i, ptr, sizeof(Elf64_Ehdr));
  if (j == -1)
    {
      free(ptr);
      close_elf(i);
      dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
      exit(98);
    }

  check_elf(ptr->e_ident);
  printf("ELF ptr:\n");
  print_magic(ptr->e_ident);
  print_class(ptr->e_ident);
  print_data(ptr->e_ident);
  print_version(ptr->e_ident);
  print_osabi(ptr->e_ident);
  print_abi(ptr->e_ident);
  print_type(ptr->e_type, ptr->e_ident);
  print_entry(ptr->e_entry, ptr->e_ident);

  free(ptr);
  close_elf(o);
  return (0);
}

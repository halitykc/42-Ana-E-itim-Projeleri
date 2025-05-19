#include <stdio.h>
#include "libft.h"

int main()
{
	printf("%i\n",ft_isalpha('a'));
	printf("%i\n",ft_isdigit('0'));
	printf("%i\n",ft_isalnum(' '));
	printf("%i\n",ft_isascii('t'));
	printf("%i\n",ft_isprint(1));
	printf("%li\n",ft_strlen("sada"));

	char str[10];
	ft_memset(str, '9', 10);
	printf("%s\n", str);
	
	char otr[10];
	ft_bzero(otr, 10);

	int	i = 0;
	while (i < 10)
		printf("%d", otr[i++]);
	printf("\n");

	char src[] = "Hello, World!";
    char dest[20];
	ft_memcpy(dest, src, 17);
	printf("%s\n",dest);

	char src2[] = "1234567890";
	ft_memmove(src2 + 2, src2, 5);
	printf("%s\n", src2);

	char src3[] = "hello44558";
	char dest1[10];

	printf("%li\n%s \n", ft_strlcpy(dest1, src3, 10), dest1);
	/*###############################################*/
	char	buffer1[50] = "Hello, ";
	char	buffer2[50] = "Hello, ";
	char	buffer3[50] = "Hello, ";
	char	buffer4[50] = "Hello, ";
	char	buffer5[50] = "Hello, ";
	char	buffer6[50] = "";
	char	buffer7[50] = "Hello, ";

	// Case 1: Normal birleştirme (yeterli alan var)
	printf("Case 1:\n");
	printf("Return: %ld\n", ft_strlcat(buffer1, "World!", 50));
	printf("Result: %s\n\n", buffer1);

	// Case 2: dsize == strlen(dest) → ekleme yok
	printf("Case 2:\n");
	printf("Return: %ld\n", ft_strlcat(buffer2, "World!", 7));
	printf("Result: %s\n\n", buffer2);

	// Case 3: dsize < strlen(dest) → hiç ekleme yok
	printf("Case 3:\n");
	printf("Return: %ld\n", ft_strlcat(buffer3, "World!", 5));
	printf("Result: %s\n\n", buffer3);

	// Case 4: dsize biraz küçük → sadece kısmı eklenir
	printf("Case 4:\n");
	printf("Return: %ld\n", ft_strlcat(buffer4, "World!", 10));
	printf("Result: %s\n\n", buffer4);

	// Case 5: dsize == 0 → hiçbir şey eklenmez
	printf("Case 5:\n");
	printf("Return: %ld\n", ft_strlcat(buffer5, "World!", 0));
	printf("Result: %s\n\n", buffer5);

	// Case 6: dest boş
	printf("Case 6:\n");
	printf("Return: %ld\n", ft_strlcat(buffer6, "World!", 10));
	printf("Result: %s\n\n", buffer6);

	// Case 7: src boş
	printf("Case 7:\n");
	printf("Return: %ld\n", ft_strlcat(buffer7, "", 50));
	printf("Result: %s\n\n", buffer7);

	char c = 'B';
	printf("%c\n\n", ft_toupper(c));

	char c1 = 'z';
	printf("%c\n\n", ft_tolower(c1));

	char test1[] = "halit yakici";
	printf("%s\n", ft_strchr(test1, 'a'));

	char test2[] = "halit yakici";
	printf("%s\n",ft_strrchr(test2, 'a'));

	printf("%i\n", ft_strncmp("halht","halit",4));

	char k[] = "halit";
	char *f = ft_memchr(k,'i',4);
	printf("%s\n", f);

	printf("%i\n", ft_memcmp("a","c",4));

	printf("%p\n", ft_strnstr("halit","ss",10));

	printf("%i\n", ft_atoi("		 f  -1235644654asd1ss23"));

	int a = 0;
	char *ko = ft_calloc(6,sizeof(char));
	while (a < 6)
	{
		printf("%i", ko[a++]);
	}
	printf("\n");


	char *s = "halit";
	char *popo = ft_strdup(s);
	printf("%s\n", popo);

	printf("Test 1: %s\n", ft_substr("hello world", 6, 5));  
	printf("Test 2: %s\n", ft_substr("hello", 10, 3));
	printf("Test 3: %s\n", ft_substr("abcdef", 3, 10));
}


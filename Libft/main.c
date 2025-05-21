#include <stdio.h>
#include "libft.h"
#include <fcntl.h>
char my_func(unsigned int i, char str)
{
 	printf("My inner function: index = %d and %c\n", i, str);
	return str - 32;
}

void my_func2(unsigned int i, char *str)
{
	(void)i;
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
}

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

	printf("%s\n\n",ft_strjoin("halit ",""));
	
	// Case 1: Baştan ve sondan kırpılacak karakterler
    char *s1 = "-+-+-++--Hello World!-+-+-++";
    char *set = "-+";
    char *trimmed1 = ft_strtrim(s1, set);
    printf("Case 1:\nOriginal: \"%s\"\nTrimmed: \"%s\"\n\n", s1, trimmed1);
    free(trimmed1);

    // Case 2: Tüm karakterler kırpılacak (tamamen set karakterlerinden oluşan bir string)
    char *s2 = "-+-+-+-++--";
    char *trimmed2 = ft_strtrim(s2, set);
    printf("Case 2:\nOriginal: \"%s\"\nTrimmed: \"%s\"\n\n", s2, trimmed2);
    free(trimmed2);

    // Case 3: Hiçbir karakter kırpılmayacak (set içinde olmayan karakterlerle dolu)
    char *s3 = "NoTrimHere";
    char *trimmed3 = ft_strtrim(s3, set);
    printf("Case 3:\nOriginal: \"%s\"\nTrimmed: \"%s\"\n\n", s3, trimmed3);
    free(trimmed3);

	char **res;
	char *halit = "kara kara daşşaklarim avuçlarini doldurur";
	res = ft_split(halit, ' ');
	int	o = 0;
	while (res[o])
	{
		printf("%s\n",res[o]);
		free(res[o]);
		o++;
	}
	free(res);

	printf("itoa(0): %s\n", ft_itoa(0));
    printf("itoa(42): %s\n", ft_itoa(12345));
    printf("itoa(-42): %s\n", ft_itoa(-12345));
    printf("itoa(2147483647): %s\n", ft_itoa(2147483647));
    printf("itoa(-2147483648): %s\n", ft_itoa(-2147483648)); // int min

	char maxverstappen[10] = "helloNIGA";
	char	*rb = ft_strmapi(maxverstappen, my_func);
	printf("%s\n\n",rb);

	ft_striteri(maxverstappen, my_func2);
	printf("%s\n\n", maxverstappen);
	
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("halit\n", 1);

	ft_putendl_fd("musa isa sen bizi kutsa",1);

	ft_putnbr_fd(-3131,1);
	printf("\n");

	// BONUS
	t_list *llcontent = ft_lstnew("hello\n");
	printf("%s",(char *)llcontent->content);

}


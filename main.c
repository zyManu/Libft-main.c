#include "libft.h"

char	mapi_iteri(unsigned int i, char c)
{
	(void)i;

	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int main(void)
{
    /*
    
    This is a test main file for the libft library. It includes
    tests for various functions implemented in the library.
    Each function is tested with sample inputs, and the results
    are printed to the console.

    The functions being tested include:
    - ft_atoi
    - ft_bzero
    - ft_calloc
    - ft_isalnum
    - ft_isalpha
    - ft_isascii
    - ft_isdigit
    - ft_isprint
    - ft_itoa
    - ft_memchr
    - ft_memcmp
    - ft_memcpy
    - ft_memmove
    - ft_memset
    - ft_putchar_fd
    - ft_putendl_fd
    - ft_putnbr_fd
    - ft_putstr_fd
    - ft_split
    - ft_strchr
    - ft_strdup
    - ft_strjoin
    - ft_strlcat
    - ft_strlcpy
    - ft_strlen
    - ft_strmapi
    - ft_strncmp
    - ft_strnstr
    - ft_strrchr
    - ft_strtrim
    - ft_substr
    - ft_tolower
    - ft_toupper

    Feel free to uncomment and test each function as needed.

    */
    
	printf("\nStarting libft tests...\n\n");
    printf("\n");

    // atoi - test
    const char *num_str;
    int result;
    num_str = "++47";
    result = ft_atoi(num_str);
    printf("The converted integer is: %d\n", result);
    printf("\n");

    //bzero - test
    char bzero_test[50] = "Hello, World!";
    ft_bzero(bzero_test, 5);
    printf("After ft_bzero: '%s'\n", bzero_test);
    printf("\n");

    // calloc - test
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(count, size);
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");;
        return 1;
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }
    free(arr);
    printf("\n");

    // isalnum - test
    char c = 'A';
    if (ft_isalnum(c))
        printf("'%c' is alphanumeric.\n", c);
    else
        printf("'%c' is not alphanumeric.\n", c);
    printf("\n");

    // isalpha - test
    char d = 'A';
    if (ft_isalpha(d))
        printf("'%c' is alphabetic.\n", d);
    else
        printf("'%c' is not alphabetic.\n", d);
    printf("\n");

    // isascii - test
    char e = 127;
    if (ft_isascii(e))
        printf("'%c' is ASCII.\n", e);
    else
        printf("'%c' is not ASCII.\n", e);
    printf("\n");

    // isdigit - test
    char f = '1';
    if (ft_isdigit(f))
        printf("'%c' is a digit.\n", f);
    else
        printf("'%c' is not a digit.\n", f);
    printf("\n");

    // isprint - test
    char g = 'A';
    if (ft_isprint(g))
        printf("'%c' is printable.\n", g);
    else
        printf("'%c' is not printable.\n", g);
    printf("\n");

    // itoa - test
    int number = -12345678;
    char *str_number = ft_itoa(number);
    if (str_number)
    {
        printf("The string representation of %d is: '%s'\n", number, str_number);
        free(str_number);
    }
    printf("\n");

    // memchr - test
    const char *memchr_test = "Hello, World!";
    char *found = ft_memchr(memchr_test, '!', 13);
    if (found)
        printf("Found '!' at position: %ld\n", found - memchr_test);
    else
        printf("'!' not found\n");
    printf("\n");

    // memcmp - test
    const char *mem1 = "Hello";
    const char *mem2 = "Hella";
    int cmp_result = ft_memcmp(mem1, mem2, 5);
    if (cmp_result == 0)
        printf("Memory blocks are equal.\n");
    else if (cmp_result < 0)
        printf("First memory block is less than the second.\n");
    else
        printf("First memory block is greater than the second.\n");
    printf("\n");

    // memcpy - test
    char dest[20];
    const char *src = "Hello, World!";
    ft_memcpy(dest, src, 13);
    dest[13] = '\0';
    printf("After ft_memcpy, dest: '%s'\n", dest);
    printf("\n");

    // memmove - test
    char *memmove_dest = malloc(18);
    const char *memmove_src = "Why u don't work?";
    ft_memmove(memmove_dest, memmove_src, 17);
    memmove_dest[17] = '\0';
    printf("After ft_memmove, src: '%s'\n", memmove_src);
    printf("After ft_memmove, dest: '%s'\n", memmove_dest);
    free(memmove_dest);
    printf("\n");

    // memset - test
    char memset_test[50] = "Hello, World!";
    ft_memset(memset_test, 'X', 5);
    printf("After ft_memset: '%s'\n", memset_test);
    printf("\n");

    // putchar_fd - test
    ft_putchar_fd('?', 1);
    printf("\n\n");

    // putendl_fd - test
    char    *txt;
    txt = "Hello, this is a test string for ft_putendl_fd.";
    ft_putendl_fd(txt, 1);
    printf("\n");

    // putnbr_fd - test
    int num = 42;
    ft_putnbr_fd(num, 1);
    printf("\n\n");

    // putstr_fd - test
    char    *str;
    str = "Hello, this is a test string for ft_putstr_fd.";
    ft_putstr_fd(str, 1);
    printf("\n\n");

    // split - test
    char *test;
    char **test_array;
    test = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
    test_array = ft_split(test, ' ');
    while (*test_array)
        printf("%s\n", *test_array++);
    printf("\n");

    // strchr - test
    const char *strchr_test = "Hello, World!";
    char *found_char = ft_strchr(strchr_test, 'i');
    if (found_char)
        printf("Found 'i' at position: %ld\n", found_char - strchr_test);
    else
        printf("'i' not found\n");
    printf("\n");

    // strdup - test
    const char *strdup_test = "Hello, World!";
    char *duplicated = ft_strdup(strdup_test);
    if (duplicated)
    {
        printf("Duplicated string: '%s'\n", duplicated);
        free(duplicated);
    }
    printf("\n");

    // strjoin - test
    const char *strjoin_s1 = "Hello";
    const char *strjoin_s2 = "World";
    char *joined = ft_strjoin(strjoin_s1, strjoin_s2);
    if (joined)
    {
        printf("Joined string: '%s'\n", joined);
        free(joined);
    }
    printf("\n");

    // strlcat - test
    char strlcat_dest[20] = "Hello";
    const char *strlcat_src = "World!";
    size_t strlcat_result = ft_strlcat(strlcat_dest, strlcat_src, 7);
    printf("After ft_strlcat, dest: '%s', result: %zu\n", strlcat_dest, strlcat_result);
    printf("\n");

    // strlcpy - test
    char strlcpy_dest[20];
    const char *strlcpy_src = "Hello, World!";
    size_t strlcpy_result = ft_strlcpy(strlcpy_dest, strlcpy_src, sizeof(strlcpy_dest));
    printf("After ft_strlcpy, dest: '%s', result: %zu\n", strlcpy_dest, strlcpy_result);
    printf("\n");

    // strlen - test
    const char *strlen_test = "Hey how are you guys??";
    size_t len = ft_strlen(strlen_test);
    printf("Length of '%s' is: %zu\n", strlen_test, len);
    printf("\n");

    // strmapi - test
	const char *strmapi_test = "Hello, World!";
	char *mapped = ft_strmapi(strmapi_test, mapi_iteri);
	if (mapped)
	{
		printf("Mapped string: '%s'\n", mapped);
		free(mapped);
	}
	printf("\n");

	// striteri - test
	const char *striteri_test = "LoReM iPsUm";
	char *iteri_mapped = ft_strmapi(striteri_test, mapi_iteri);
	if (iteri_mapped)
	{
		printf("Iteri mapped string: '%s'\n", iteri_mapped);
		free(iteri_mapped);
	}
	printf("\n");

    // strncmp - test
    const char *strncmp_s1 = "Hello";
    const char *strncmp_s2 = "world";
    int strncmp_result = ft_strncmp(strncmp_s1, strncmp_s2, 5);
    if (strncmp_result == 0)
        printf("Strings are equal.\n");
    else if (strncmp_result < 0)
        printf("First string is less than the second.\n");
    else
        printf("First string is greater than the second.\n");
    printf("\n");

    // strnstr - test
    const char *haystack = "Hello, welcome to the world of C programming.";
    const char *needle = "world";
    char *strnstr_result = ft_strnstr(haystack, needle, 50);
    if (strnstr_result)
        printf("Found substring at position: %ld\n", strnstr_result - haystack);
    else
        printf("Substring not found\n");
    printf("\n");

    // strrchr - test
    const char *strrchr_test = "Hello, World!";
    char *last_occurrence = ft_strrchr(strrchr_test, 'o');
    if (last_occurrence)
        printf("Last occurrence of 'o' at position: %ld\n", last_occurrence - strrchr_test);
    else
        printf("'o' not found\n");
    printf("\n");

    // strtrim - test
    const char *strtrim_s1 = "eoeoeoeHello, World!oeoeoe";
    const char *strtrim_set = "eo";;
    char *trimmed = ft_strtrim(strtrim_s1, strtrim_set);
    if (trimmed)
    {
        printf("Trimmed string: '%s'\n", trimmed);
        free(trimmed);
    }
    printf("\n");

    // substr - test
    const char *substr_test = "Hello, World!";
    char *sub = ft_substr(substr_test, 7, 5);
    if (sub)
    {
        printf("Substring: '%s'\n", sub);
        free(sub);
    }
    printf("\n");

    // tolower - test
    char upper = 'F';
    char lower = ft_tolower(upper);
    printf("Lowercase of '%c' is '%c'\n", upper, lower);
    printf("\n");

    // toupper - test
    char lower2 = 'p';
    char upper2 = ft_toupper(lower2);
    printf("Uppercase of '%c' is '%c'\n", lower2, upper2);
    printf("\n\n\n");

    // end of tests
	printf("End of libft tests.\n\n");
    return 0;
}

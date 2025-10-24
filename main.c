/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:59:44 by eina              #+#    #+#             */
/*   Updated: 2025/10/25 01:30:54 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int x;
	char *str;

	x = 42;
	str = "This is a long test.. that combined multiple specifiers";
	ft_printf("Testing char: [ %c ]\n", '7');
	ft_printf("Testing decimal: [ %d ]\n", 765);
	ft_printf("Testing unsigned: [ %u ]\n", UINT_MAX);
	ft_printf("Testing string: [ %s ]\n", str);
	ft_printf("Testing pointer: [ %p ]\n", &x);
	printf("Testing pointer (original): [ %p ]\n", &x);
	ft_printf("Testing hexLower: -> %x, and hexUpper: -> %X\n", 4294877295u,
		4294877295u);
	printf("Testing (Original) hexLower: -> %x, and hexUpper: -> %X\n",
		4294877295u, 4294877295u);
	ft_printf("Testing \%: [ 80%% ]\n");
	ft_printf("%s.. \ncharacter -> %c, \ndecimals -> %d, \nunsigned int ->%u ",
		str, 'G', 12345, UINT_MAX);

	return (0);
} */
/* 
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret_std, ret_ft;
    void *ptr = (void *)0x1234abcd;
    char *str = "Hello, 42!";
    unsigned int u = 4294967295;
    int d = -2147483648;
    int i = 42;
    char c = 'A';

    // %c
    ret_std = printf("STD: %%c = [%c]\n", c);
    ret_ft  = ft_printf("FT : %%c = [%c]\n", c);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %s
    ret_std = printf("STD: %%s = [%s]\n", str);
    ret_ft  = ft_printf("FT : %%s = [%s]\n", str);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %p
    ret_std = printf("STD: %%p = [%p]\n", ptr);
    ret_ft  = ft_printf("FT : %%p = [%p]\n", ptr);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %d
    ret_std = printf("STD: %%d = [%d]\n", d);
    ret_ft  = ft_printf("FT : %%d = [%d]\n", d);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %i
    ret_std = printf("STD: %%i = [%i]\n", i);
    ret_ft  = ft_printf("FT : %%i = [%i]\n", i);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %u
    ret_std = printf("STD: %%u = [%u]\n", u);
    ret_ft  = ft_printf("FT : %%u = [%u]\n", u);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %x
    ret_std = printf("STD: %%x = [%x]\n", u);
    ret_ft  = ft_printf("FT : %%x = [%x]\n", u);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %X
    ret_std = printf("STD: %%X = [%X]\n", u);
    ret_ft  = ft_printf("FT : %%X = [%X]\n", u);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %%
    ret_std = printf("STD: %% = [%%]\n");
    ret_ft  = ft_printf("FT : %% = [%%]\n");
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    return 0;
} */


#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int ret_std, ret_ft;
    char *null_str = NULL;
    void *null_ptr = NULL;
    void *valid_ptr = (void *)0xdeadbeef;

    // Empty string
    ret_std = printf("STD: Empty string: [%s]\n", "");
    ret_ft  = ft_printf("FT : Empty string: [%s]\n", "");
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // NULL string
    ret_std = printf("STD: NULL string: [%s]\n", null_str);
    ret_ft  = ft_printf("FT : NULL string: [%s]\n", null_str);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // NULL pointer
    ret_std = printf("STD: NULL pointer: [%p]\n", null_ptr);
    ret_ft  = ft_printf("FT : NULL pointer: [%p]\n", null_ptr);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // Valid pointer
    ret_std = printf("STD: Valid pointer: [%p]\n", valid_ptr);
    ret_ft  = ft_printf("FT : Valid pointer: [%p]\n", valid_ptr);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // Zero values
    ret_std = printf("STD: Zero int: [%d], Zero unsigned: [%u], Zero hex: [%x]\n", 0, 0u, 0u);
    ret_ft  = ft_printf("FT : Zero int: [%d], Zero unsigned: [%u], Zero hex: [%x]\n", 0, 0u, 0u);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // INT_MIN and INT_MAX
    ret_std = printf("STD: INT_MIN: [%d], INT_MAX: [%d]\n", INT_MIN, INT_MAX);
    ret_ft  = ft_printf("FT : INT_MIN: [%d], INT_MAX: [%d]\n", INT_MIN, INT_MAX);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // UINT_MAX
    ret_std = printf("STD: UINT_MAX: [%u], Hex: [%x], HEX: [%X]\n", UINT_MAX, UINT_MAX, UINT_MAX);
    ret_ft  = ft_printf("FT : UINT_MAX: [%u], Hex: [%x], HEX: [%X]\n", UINT_MAX, UINT_MAX, UINT_MAX);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // Mixed specifiers
    ret_std = printf("STD: Char: [%c], String: [%s], Int: [%d], Hex: [%x], Percent: [%%]\n", 'Z', "42", 42, 42);
    ret_ft  = ft_printf("FT : Char: [%c], String: [%s], Int: [%d], Hex: [%x], Percent: [%%]\n", 'Z', "42", 42, 42);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // Repeated specifiers
    ret_std = printf("STD: [%d][%d][%d]\n", 1, 2, 3);
    ret_ft  = ft_printf("FT : [%d][%d][%d]\n", 1, 2, 3);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // Empty format string
    ret_std = printf(" ");
    ret_ft  = ft_printf("");
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // Only percent signs
    ret_std = printf("STD: [%%%%]\n");
    ret_ft  = ft_printf("FT : [%%%%]\n");
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    return 0;
}

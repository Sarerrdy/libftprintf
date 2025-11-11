/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:59:44 by eina              #+#    #+#             */
/*   Updated: 2025/11/11 18:39:21 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include <stdio.h>
#include "ft_printf_bonus.h"

int main(void)
{
    int ret_std, ret_ft;
    void *ptr = (void *)0x1234abcd;
    char *str = "Hello, 42!";
    unsigned int u = 4294967295;
    // int d = -2147483648;
    int i = 42;
    int d = -42;
    char c = 'A';

    // %c
    ret_std = printf("STD: %%c = [%c]\n", c);
    ret_ft  = ft_printf("FT : %%c = [%c]\n", c);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %s
    ret_std = printf("STD: %%s = [%s]\n", str);
    ret_ft  = ft_printf("FT : %%s = [%s]\n", str);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %d
    ret_std = printf("STD: %%d = [%d]\n", d);
    ret_ft  = ft_printf("FT : %%d = [%d]\n", d);
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

    // %p
    ret_std = printf("STD: %%p = [%p]\n", ptr);
    ret_ft  = ft_printf("FT : %%p = [%p]\n", ptr);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %i
    ret_std = printf("STD: %%i = [%i]\n", i);
    ret_ft  = ft_printf("FT : %%i = [%i]\n", i);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %%
    ret_std = printf("STD: %% = [%%]\n");
    ret_ft  = ft_printf("FT : %% = [%%]\n");
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    return 0;
} */

/////////////BONUS/////////////////////////////

#include <stdio.h>
#include "ft_printf_bonus.h"

int main(void)
{
    int ret_std, ret_ft;
    void *ptr = (void *)0x1234abcd;
    char *str = "Hello, 42!";
    unsigned int u = 4294967295;
    int i = 42;
    int d = -42;
    char c = 'A';

    // %c with width and left flag
    ret_std = printf("STD: %%c = [%-5c]\n", c);
    ret_ft  = ft_printf("FT : %%c = [%-5c]\n", c);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %s with width, precision, left flag
    ret_std = printf("STD: %%s = [%-10.5s]\n", str);
    ret_ft  = ft_printf("FT : %%s = [%-10.5s]\n", str);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %d with zero flag, width, precision
    ret_std = printf("STD: %%d = [%8.5d]\n", d);
    ret_ft  = ft_printf("FT : %%d = [%8.5d]\n", d);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %i with left flag and width
    ret_std = printf("STD: %%i = [%-6i]\n", i);
    ret_ft  = ft_printf("FT : %%i = [%-6i]\n", i);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %u with zero flag and width
    ret_std = printf("STD: %%u = [%010u]\n", u);
    ret_ft  = ft_printf("FT : %%u = [%010u]\n", u);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %x with width and precision
    ret_std = printf("STD: %%x = [%12.8x]\n", u);
    ret_ft  = ft_printf("FT : %%x = [%12.8x]\n", u);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %X with left flag and width
    ret_std = printf("STD: %%X = [%-12X]\n", u);
    ret_ft  = ft_printf("FT : %%X = [%-12X]\n", u);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %p with width
    ret_std = printf("STD: %%p = [%20p]\n", ptr);
    ret_ft  = ft_printf("FT : %%p = [%20p]\n", ptr);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %% with width and left flag
    ret_std = printf("STD: %% = [%-5s]\n", "%");
    ret_ft  = ft_printf("FT : %% = [%-5s]\n", "%");
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    // %p with width
    ret_std = printf("STD: %%p = [%20p]\n", ptr);
    ret_ft  = ft_printf("FT : %%p = [%20p]\n", ptr);
    printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

        // %p with width
    // ret_std = printf(NULL);
    // ret_ft  = ft_printf(NULL);
    // printf("Return STD: %d | FT: %d\n\n", ret_std, ret_ft);

    return 0;
}




///////////////////////////////////////////////////////////////////////////


//mandantory
/* #include <stdio.h>
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
    printf("\nReturn STD: %d | FT: %d\n\n", ret_std, ret_ft);

    return 0;
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printfbehaviour.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:48:41 by mintan            #+#    #+#             */
/*   Updated: 2024/06/04 17:55:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    int		number = 123;
    float	pi = 3.14159;
	char 	c = 'C';
	char	*str = "this is a string";
	void	*ptr;



    printf("|%10d|\n", number);  // Right-justified, width 10
    printf("|%-10d|\n", number); // Left-justified, width 10
    printf("|%+10d|\n", number); // Right-justified with sign, width 10
    printf("|%010d|\n", number); // Zero-padded, width 10
    printf("|% 10d|\n", number); // Leading space, width 10

    printf("|%#x|\n", number);   // Hex with 0x prefix
    printf("|%10.2f|\n", pi);    // Floating-point, width 10, 2 decimal places
    printf("|%010.2f|\n", pi);   // Zero-padded, width 10, 2 decimal places
    printf("|%+10.2f|\n", pi);   // Right-justified with sign, width 10, 2 decimal places
	printf("|%+10.4f|\n\n", pi);   // Right-justified with sign, width 10, 4 decimal places

	ptr = &c;
	printf("Char: %c\n", c);					// Print char
	printf("Str: %s\n", str);					// Print str
	printf("Ptr: %p\n", ptr);					// Print ptr
	printf("Dec: %d\n", number);				// Print decimal (base 10) number
	printf("Int: %i\n", number);				// Print an integer in base 10 should be the same as %d for printf
	printf("Unsigned dec: %u\n", number);		// Print an unsigned decimal (base 10) number
	printf("Unsigned dec: %u\n", -1);			// Print an unsigned decimal (base 10) number
	printf("Unsigned dec: %u\n", -2);			// Print an unsigned decimal (base 10) number
	printf("Unsigned dec: %u\n", -3);			// Print an unsigned decimal (base 10) number
	printf("Unsigned dec: %u\n", -2147483647);	// Print an unsigned decimal (base 10) number


	printf("Hex lowercase: %x\n", 127);		// Print hexadecimal (base 16) lowercase
	printf("Hex uppercase: %X\n", 127);		// Print hexadecimal (base 16) uppercase
	printf("Hex uppercase: %X\n", 127);		// Print hexadecimal (base 16) uppercase


	printf("Percentage sign: %%\n");		// Print % sign
	//printf("test unmatched %s, %s, %s, %s\n", "t1", "t2", "t3");
	printf("%\n");

    return 0;
}

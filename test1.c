/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 00:48:41 by mintan            #+#    #+#             */
/*   Updated: 2024/06/04 00:48:41 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    int number = 123;
    float pi = 3.14159;

    printf("|%10d|\n", number);  // Right-justified, width 10
    printf("|%-10d|\n", number); // Left-justified, width 10
    printf("|%+10d|\n", number); // Right-justified with sign, width 10
    printf("|%010d|\n", number); // Zero-padded, width 10
    printf("|% 10d|\n", number); // Leading space, width 10

    printf("|%#x|\n", number);   // Hex with 0x prefix
    printf("|%10.2f|\n", pi);    // Floating-point, width 10, 2 decimal places
    printf("|%010.2f|\n", pi);   // Zero-padded, width 10, 2 decimal places
    printf("|%+10.2f|\n", pi);   // Right-justified with sign, width 10, 2 decimal places
	printf("|%+10.4f|\n", pi);   // Right-justified with sign, width 10, 4 decimal places

    return 0;
}

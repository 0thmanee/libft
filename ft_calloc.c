/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:01:36 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/14 09:11:12 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	void	*str;

	if ((size && count > (4294967295 / size)))
		return (NULL);
	if ((int) count < 0 && (int) size < 0)
		return (NULL);
	bytes = count * size;
	str = malloc(bytes);
	if (!str)
		return (NULL);
	ft_bzero(str, bytes);
	return (str);
}


int main() {
	// 18446744073709551615
	// 9223372036854775808
    // Case where count * size would overflow
    // size_t count = SIZE_MAX / 2 + 1;
    // size_t size = 2;

    // // Standard calloc
    // void *std_ptr = calloc(count, size);
    // if (std_ptr == NULL) {
    //     printf("Standard calloc returned NULL (expected behavior on overflow)\n");
    // } else {
    //     printf("Standard calloc allocated memory (unexpected on overflow)\n");
    //     free(std_ptr);
    // }

    // // Custom ft_calloc
    // void *ft_ptr = ft_calloc(count, size);
    // if (ft_ptr == NULL) {
    //     printf("ft_calloc returned NULL (expected behavior on overflow)\n");
    // } else {
    //     printf("ft_calloc allocated memory (unexpected on overflow)\n");
    //     free(ft_ptr);
    // }

    // return 0;
	void *p1 = ft_calloc(SIZE_MAX / 2 + 1, 2);
	void *p2 = calloc(SIZE_MAX / 2 + 1, 2);
	if (p1 == NULL)
		printf("ft_calloc returned NULL\n");
	if (p2 == NULL)
		printf("calloc returned NULL\n");
}
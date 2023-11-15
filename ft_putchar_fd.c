/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <obouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:17:26 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/14 13:50:04 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write (fd, &c, 1);
}

#include <fcntl.h>
int main()
{
	int fd = open("test", O_RDONLY);
	sleep(100);
}
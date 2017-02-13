/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_put_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:16:03 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 12:24:49 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_tests/framework_test.h"
#include <string.h>
#include <unistd.h>

int	put_test(void)
{
	char	buff[1024];

	ft_putchar('c');
	lseek(1, -1, SEEK_CUR);
	read(1, buff, 1);
	if (memcmp(buff, "c", 1))
		return (-1);
	else
		return (0);
}

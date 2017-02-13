/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:53:42 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 20:51:05 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework_test.h"
#include <stdlib.h>
#include <unistd.h>

char		*ft_strnew(int j, char *str)
{
	char	test;
	char	*test2;

	if (j == 2)
	{
		test2 = malloc(1255);
		free(test2);
		free(test2);
	}
	while (j == 1)
		test = 'p';
	str[0] = 'p';
	return (0);
}

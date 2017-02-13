/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_cmp_1_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:54:45 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 15:57:07 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** Value returned by ft_strcmp should be the same has strcmp for same input
*/

int	basic_cmp_1_test(void)
{
	if (ft_strcmp("Hello", "Hello") == strcmp("Hello", "Hello"))
		return (0);
	else
		return (-1);
}

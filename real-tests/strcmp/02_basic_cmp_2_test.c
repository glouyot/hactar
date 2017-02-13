/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_cmp_2_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:56:00 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 15:56:44 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** Value returned by ft_strcmp should be the same has strcmp for same input
*/

int	basic_cmp_2_test(void)
{
	if (ft_strcmp("Hell", "Hello") == strcmp("Hell", "Hello"))
		return (0);
	else
		return (-1);
}

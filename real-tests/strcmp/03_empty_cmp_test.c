/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_cmp_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:59:18 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 15:59:31 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** Value returned by ft_strcmp should be the same has strcmp for same input
*/

int	empty_cmp_test(void)
{
	if (ft_strcmp("", "Hello") == strcmp("", "Hello"))
		return (0);
	else
		return (-1);
}

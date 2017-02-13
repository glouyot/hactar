/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_zero_cmp_2_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:01:00 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 16:04:52 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** Value returned by ft_strcmp should be the same has strcmp for same input
*/

int	zero_cmp_2_test(void)
{
	if (ft_strcmp(NULL, NULL) == strcmp(NULL, NULL))
		return (0);
	else
		return (-1);
}

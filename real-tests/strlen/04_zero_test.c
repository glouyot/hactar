/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:03:13 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 14:06:10 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** length returned by ft_strlen should be the same has strlen for same input
*/

int	zero_test(void)
{
	if (ft_strlen("Hello,\\0 see me ?") == strlen("Hello,\\0 see me ?"))
		return (0);
	else
		return (-1);
}

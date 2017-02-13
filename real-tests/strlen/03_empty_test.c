/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:00:11 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 14:02:06 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** length returned by ft_strlen should be the same has strlen for same input
*/

int	empty_test(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	else
		return (-1);
}

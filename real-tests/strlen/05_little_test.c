/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_little_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:07:54 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 14:10:16 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** length returned by ft_strlen should be the same has strlen for same input
*/

int	little_test(void)
{
	const char	*s;

	s = "YOLO";
	if ((unsigned long)s & 0b111)
		s++;
	if (ft_strlen(s) == strlen(s))
		return (0);
	else
		return (-1);
}

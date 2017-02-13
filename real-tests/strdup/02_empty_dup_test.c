/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_dup_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:24:05 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 16:18:31 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

/*
** string returned by ft_strdup should be the same has strdup for same input
*/

int			empty_dup_test(void)
{
	char	*str;
	char	*tmp;

	tmp = "";
	str = ft_strdup(tmp);
	if (strcmp(str, tmp))
		return (-1);
	free(str);
	return (0);
}

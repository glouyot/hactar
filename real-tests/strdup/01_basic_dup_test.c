/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_dup_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:16:30 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 16:19:24 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

/*
** string returned by ft_strdup should be the same has strdup for same input
*/

int			basic_dup_test(void)
{
	char	*str;
	char	*tmp;

	tmp = "HAHAHA \0 tu me vois pas !";
	str = ft_strdup(tmp);
	if (strcmp(str, tmp))
		return (-1);
	free(str);
	return (0);
}

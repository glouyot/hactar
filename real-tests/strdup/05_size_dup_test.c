/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_size_dup_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:36:11 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 16:15:18 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

/*
** string returned by ft_strdup should be the same has strdup for same input
*/

int			size_dup_test(void)
{
	char	*str;

	str = ft_strdup("lol");
	return (strlen(str) == 3 ? 0 : -1);
}

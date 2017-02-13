/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_malloc_dup_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:31:32 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 16:18:09 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

/*
** string returned by ft_strdup should be the same has strdup for same input
*/

int			malloc_dup_test(void)
{
	char	*str;

	str = ft_strdup("Malloc");
	return (str ? 0 : -1);
}

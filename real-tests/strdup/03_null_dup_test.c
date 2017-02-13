/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_dup_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:29:43 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 16:18:47 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>
#include <stdlib.h>

/*
** string returned by ft_strdup should be the same has strdup for same input
*/

int			null_dup_test(void)
{
	char	*str;

	str = NULL;
	ft_strdup(NULL);
	return (!str ? 0 : -1);
}

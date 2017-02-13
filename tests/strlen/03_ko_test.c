/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:26:09 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 20:18:34 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../framework_tests/framework_test.h"

/*
** length returned by ft_strlen should be the same has strlen for same input
*/

int	ko_test(void)
{
	if (ft_strlen("Hello", 2) == strlen("Hello"))
		return (0);
	else
		return (-1);
}

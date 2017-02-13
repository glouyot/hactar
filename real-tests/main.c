/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 05:57:33 by hmartzol          #+#    #+#             */
/*   Updated: 2017/02/12 20:34:30 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests_libft.h"

int		main(void)
{
	int	ret;

	ret = 0;
	if (strlen_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (strdup_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (strcmp_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	return (ret);
}

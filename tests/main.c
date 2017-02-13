/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 05:57:33 by hmartzol          #+#    #+#             */
/*   Updated: 2017/02/13 18:14:00 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"
#include <stdio.h>

int		main(void)
{
	int	ret;

	ret = 0;
	if (strlen_launcher())
	{
		print_red(1, "test failled\n", 13);
		ret++;
	}
	else
		print_green(1, "test passed\n", 12);
	if (putchar_launcher())
	{
		print_red(1, "test failled\n", 13);
		ret++;
	}
	else
		print_green(1, "test passed\n", 12);
	if (strnew_launcher())
	{
		print_red(1, "test failled\n", 13);
		ret++;
	}
	else
		print_green(1, "test passed\n", 12);
	return (ret);
}

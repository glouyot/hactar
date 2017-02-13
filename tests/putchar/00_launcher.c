/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 11:44:47 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 20:18:17 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../tests.h"

int	putchar_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "PUTCHAR:\n", 9);
	testlist = NULL;
	load_test(&testlist, "Put test", &put_test, create_signal_code(0, 0));
	return (launch_test(&testlist));
}

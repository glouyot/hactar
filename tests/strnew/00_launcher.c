/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:27:20 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 21:06:08 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../tests.h"

int	strnew_launcher(void)
{
	t_unit_test *testlist;

	print(1, "STRNEW:\n", 8);
	testlist = NULL;
	load_test(&testlist, "Bus Error test", &bus_error_test,
			create_signal_code(SIGBUS, 0));
	load_test(&testlist, "Abort test    ", &abort_test,
			create_signal_code(SIGABRT, 0));
	load_test(&testlist, "Timeout test  ", &time_out_test,
			create_signal_code(SIGALRM, 0));
	return (launch_test(&testlist));
}

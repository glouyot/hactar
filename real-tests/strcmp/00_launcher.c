/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:51:40 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 20:31:45 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../tests_libft.h"

int	strcmp_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "STRCMP:\n", 8);
	testlist = NULL;
	load_test(&testlist, "Basic 1 test", &basic_cmp_1_test,
			create_signal_code(0, 0));
	load_test(&testlist, "Basic 2 test", &basic_cmp_2_test,
				create_signal_code(0, 0));
	load_test(&testlist, "Empty test  ", &empty_cmp_test,
			create_signal_code(0, 0));
	load_test(&testlist, "Zero 1 test ", &zero_cmp_1_test,
			create_signal_code(SIGSEGV, 0));
	load_test(&testlist, "Zero 2 test ", &zero_cmp_2_test,
			create_signal_code(SIGSEGV, 0));
	return (launch_test(&testlist));
}

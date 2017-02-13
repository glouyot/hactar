/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 06:08:49 by hmartzol          #+#    #+#             */
/*   Updated: 2017/02/12 20:31:59 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../tests_libft.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "STRLEN:\n", 8);
	testlist = NULL;
	load_test(&testlist, "Basic test ", &basic_test, create_signal_code(0, 0));
	load_test(&testlist, "NULL test  ", &null_test,
				create_signal_code(SIGSEGV, 0));
	load_test(&testlist, "Empty test ", &empty_test, create_signal_code(0, 0));
	load_test(&testlist, "Zero test  ", &zero_test, create_signal_code(0, 0));
	load_test(&testlist, "Little test", &little_test, create_signal_code(0, 0));
	return (launch_test(&testlist));
}

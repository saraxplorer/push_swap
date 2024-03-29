/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 20:09:41 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/15 17:09:36 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		exit (1);
	a = ft_make_llist(argc, argv);
	if (!a || ft_checkdup(a))
	{
		ft_free(&a);
		print_error();
	}
	if (!ft_checksorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}

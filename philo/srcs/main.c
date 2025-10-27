/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 03:06:10 by maxmart2          #+#    #+#             */
/*   Updated: 2025/10/27 04:25:46 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_table	*table;

	table = parse_arguments(argc, argv);
	if (!table)
		return (1);
	printf("Arguments OK\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 04:10:32 by maxmart2          #+#    #+#             */
/*   Updated: 2025/10/27 04:28:39 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_bool	is_valid_int(char *str)
{
	int		i;
	long	n;

	n = 0;
	i = -1;
	while (str[++i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (FALSE);
		if (i == 10)
			return (FALSE);
		n = n * 10 + str[i] - '0';
	}
	if (n < 0 || n > 4294967295)
		return (FALSE);
	return (TRUE);
}

t_bool	are_valid_int(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		if (!is_valid_int(argv[i]))
			return (printf("Error: argv[%d] is not an unsigned int.\n", i),
				FALSE);
	return (TRUE);
}

t_table	*parse_arguments(int argc, char **argv)
{
	t_table	*table;

	if (argc < 5 || argc > 6)
		return (printf("Use :./philo <n_philos> <time_to_die> <time_to_eat> "
			"<time_to_sleep> [meals_limit]\n"), NULL);
	if (!are_valid_int(argc, argv))
		return (NULL);
	table = (t_table *)malloc(sizeof(t_table));
	if (!table)
		return (NULL);
	
	return (table);
}

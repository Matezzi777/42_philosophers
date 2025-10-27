/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 03:06:38 by maxmart2          #+#    #+#             */
/*   Updated: 2025/10/27 04:26:20 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>	//write, usleep
# include <string.h>	//memset
# include <stdio.h>		//printf
# include <stdlib.h>	//malloc, free
# include <sys/time.h>	//gettimeofday
# include <pthread.h>	//pthread_create, pthread_detach, pthread_join,
						//pthread_mutex_init, pthread_mutex_destroy,
						//pthread_mutex_lock, pthread_mutex_unlock

typedef enum e_bool
{
	FALSE,
	TRUE
}				t_bool;

typedef struct s_philo
{
	int	id;
	int	meals_eaten;
	pthread_mutex_t	*left;
	pthread_mutex_t	*right;
}				t_philo;

typedef struct s_table
{
	t_philo			*philos;
	unsigned int	time_to_die;
	unsigned int	time_to_eat;
	unsigned int	time_to_sleep;
	unsigned int	meals_limit;
	pthread_mutex_t	*forks;
	pthread_mutex_t	print_mutex;
	pthread_mutex_t	meal_check_mutex;
}				t_table;

t_table	*parse_arguments(int argc, char **argv);

#endif
#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>
# include <fcntl.h>
# include <stdint.h>
# include "structs.h"

//--------macros----------
# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"
# define INT_MAX	__INT_MAX__
# define INT_MIN	-2147483648

//--------main
int			ft_check_input(int argc, char *argv[]);
void		*ft_barrier(void *a);
void		ft_count_down(int seconds);

//--------starting
void		ft_start_data(int argc, char *argv[], t_data *data);
void		ft_init_waiter_data(char *argv[], t_data *data);
void		ft_init_philos(t_data *data);
void		ft_init_gmutex(t_data *data);
void		ft_init_forks(t_data *data);

//--------threads
void		ft_supervisor(t_data *data);
void		ft_init_threads(t_data *a);
void		ft_starvation_end(t_data *data, int i);

//--------routine
void		ft_routine(t_philo *philo);
int			ft_take_forks(t_philo *philo);
int			ft_last_philo_take_forks(t_philo *philo);
void		ft_eat(t_philo *philo);
void		ft_check_eated(t_philo *philo);

//--------waiter
void		ft_create_waiter(t_data *data);
void		*ft_waiter_end(t_data *data);
void		*ft_waiter(void *a);

//---------ending
void		ft_error_message(char *s);
void		ft_clean_all(t_data *data);
void		ft_thread_fail(t_data *data);

//--------utils
u_int64_t	ft_get_time(void);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
int			ft_isdigit(char *s);
int			ft_atoi(const char *nptr);
int			ft_print(t_philo *philo, char *str);
void		ft_usleep(useconds_t time);

#endif
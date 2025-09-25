/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 23:41:28 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/24 23:10:29 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# define BUF_SIZE 100000

int		solve_map_print(char **map, char *symbols, int height, int width);
void	free_2d_map(char **map, int height);
char	**get_2arr(char *buf, int *rows, int *cols);
char	*ft_strdup(char *src);
int		get_buffer(char *addr, char *buf);
int		count_lines_no_header(char **map);
int		count_cols(char *buf);
void	get_map_symbols(char *buf, char *symbols);
void	print_result(char **map, char *symbols, int size_pos[5]);
void	free_2d_dp(int	**dp, int height);
char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str, char *end);
char	*read_file_all(char *path);
int		map_header_parser(char *header, char *symbols, int *size);
int		ft_atoi(char *str);
void	solve_maps_print(int argc, char *argv[]);
void	ft_put_map_error(void);
void	solve_map_print_std(void);
void	print_new_line_if_not_end(int argc, int i);
int		is_valid_file(char *buf, int argc, int i);
int		is_in_symbols(char c, char *symbols);
int		is_valid_map_all(char **map, char *symbols, int *size);
void	free_2d_map_nullterm(char **map);
char	*read_file_std_all(void);

#endif

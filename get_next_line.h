/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavitori <mavitori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:01:18 by mavitori          #+#    #+#             */
/*   Updated: 2023/11/13 19:21:26 by mavitori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// struct
typedef struct s_content
{
	char				character;
	struct s_content	*next;
}						t_content;

char					*build_line(t_content **list, int size);
int						ft_search_end(t_content **list, int mode);
char					*read_buffer(int fd, t_content **list);
char					*get_next_line(int fd);

int						ft_search_last(t_content **list);
void					*ft_calloc(size_t nmemb, size_t size);
t_content				*ft_lstnew(char character);
void					ft_lstadd_back(t_content **list, t_content *new);
void					ft_strmap(char const *s, t_content **list);
void					ft_lstclear(t_content **list);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#endif

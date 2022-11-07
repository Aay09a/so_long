/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:19:36 by ahussein          #+#    #+#             */
/*   Updated: 2022/11/07 19:19:37 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif

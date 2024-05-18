/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:25 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/25 17:32:35 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stddef.h>

int					ft_strncmp(const char *s1, const char *s2, unsigned int n);
char				*ft_strrchr(const char *s, int c);
char				*ft_itoa(int n);

#endif

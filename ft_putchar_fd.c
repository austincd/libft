/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 04:32:43 by adaly             #+#    #+#             */
/*   Updated: 2017/05/30 16:56:32 by adaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(unsigned int c, int fd)
{
	int				char_length;
	unsigned long	full_char;
	unsigned char	*ptr;

	full_char = ft_char_expand(c);
	ptr = ((unsigned char*)&full_char);
	char_length = ft_utf8width(ptr);
	write(fd, ptr, char_length);
}

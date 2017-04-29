/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 06:23:39 by adaly             #+#    #+#             */
/*   Updated: 2017/04/29 06:34:05 by adaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_write_file(int fd, void *data, long long size)
{
	long long	to_write;
	int			bpc;
	int			free;

	free = 0;
	to_write = size;
	if (!data)
	{
		data = ft_memalloc(bpc);
		free = 1;
	}
	while (to_write)
	{
		if (bpc < to_write)
			to_write -= write(fd, data, bpc);;
		else if (bpc >= to_write)
			to_write -= write(fd, data, to_write);
	}
	if (free)
		free (data);
}

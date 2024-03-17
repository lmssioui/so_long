/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:19:50 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/20 01:48:42 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
/*#include <fcntl.h>
int main()
{
	 int fd;

	 fd = open("putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	 ft_putnbr_fd(14256,fd);
	 write(fd,"\n",1);
	 ft_putnbr_fd(-58617,fd);
	 write(fd,"\n",1);
	 ft_putnbr_fd(-2147483648,fd);


}*/

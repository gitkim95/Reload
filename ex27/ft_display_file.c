/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gitkim <gitkim@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:22:33 by gitkim            #+#    #+#             */
/*   Updated: 2024/09/25 21:36:47 by gitkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	int		fd;
	int		n;
	char	buf[30000];

	if (ac < 2)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	n = read(fd, buf, 30000);
	if (fd < 0 || n < 0)
	{
		ft_putstr("Cannot read file.");
		return (0);
	}
	buf[n] = '\0';
	ft_putstr(buf);
	close(fd);
	return (0);
}

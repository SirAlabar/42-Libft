/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/17 15:16:50 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	/*
	char	**str = ft_split("testring", 's');
	int	i = 0;
	while (str[i])
	{
		printf("ARR: %s \n", str[i]);
		i++;
	}
	//printf("Mine: %s", ft_split("xxxxxxxxhello!", 'x'));
	*/
	printf("%s", ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t"));
	return (0);
}


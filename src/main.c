/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/15 08:37:24 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>

char capitalize(unsigned int i, char c)
{
  if (i > 0)
    c = toupper(c);
  return (c);
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	char	*result = ft_strmapi("Hello World", capitalize);
	printf("%s\n", result);
	return (0);
}

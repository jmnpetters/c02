/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:32:40 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/14 14:29:05 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	tabsrc[] = "Banana";
	char	tabdest[] = "Apple";

	printf("%s\n", tabsrc);
	printf("%s\n", tabdest);

	ft_strcpy(tabsrc, tabdest);

	printf("%s\n", tabsrc);
	printf("%s\n", tabdest);
}*/

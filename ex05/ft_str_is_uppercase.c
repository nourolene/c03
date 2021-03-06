/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noabdull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 22:51:02 by noabdull          #+#    #+#             */
/*   Updated: 2021/08/18 01:47:22 by noabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 'A' && str[a] <= 'Z'))
			return (0);
		a++;
	}	
	return (1);
}

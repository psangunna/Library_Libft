/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:00:48 by pamela            #+#    #+#             */
/*   Updated: 2024/04/14 20:00:54 by pamela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*Convert a string to an integer
*/
int	ft_atoi(const char *str)
{
	int	sig;
	int	i;
	int	r;

	i = 0;
	sig = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i++] - '0');
	}
	return (sig * r);
}
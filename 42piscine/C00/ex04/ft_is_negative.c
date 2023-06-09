/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:27:34 by marvin            #+#    #+#             */
/*   Updated: 2023/04/04 17:27:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h> // #include <unistd.h> 

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_is_negative(int n)
{
  if(n < 0)
    ft_putchar('N');
  else
    ft_putchar('P');
}

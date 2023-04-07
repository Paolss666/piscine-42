/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:19:49 by marvin            #+#    #+#             */
/*   Updated: 2023/04/04 17:19:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h> // #include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_print_numbers(void)
{
  int i;

  i = '0';
  while (i <= '9')
  {
    ft_putchar(i);
    i++;
  }
  
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynabouzi <ynabouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:27:29 by ynabouzi          #+#    #+#             */
/*   Updated: 2022/06/30 20:04:00 by ynabouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# define SUCCESS 0

# include <unistd.h>

typedef int	t_bool;

# define EVEN(var) (var % 2 == 0)

# define FALSE 0
# define TRUE (!FALSE)

# define ODD_MSG "I have an odd number of arguments."
# define EVEN_MSG "I have an even number of arguments."
#endif

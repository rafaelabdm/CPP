/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:52:02 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 10:43:22 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <cstdlib>
# include <iostream>

# include "A.hpp"
# include "B.hpp"
# include "Base.hpp"
# include "C.hpp"
# include "colors.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
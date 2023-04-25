/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/25 12:26:13 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
   private:
   int               value;
   static const int  bits = 8;

   public:
   Fixed();
   Fixed(const Fixed&a);
   ~Fixed();
   Fixed& operator = (const Fixed&a);
   int   getRawBits( void ) const;
   void  setRawBits( int const raw );

};

#endif
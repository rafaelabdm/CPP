/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/25 12:27:10 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
   private:
   int               value;
   static const int  bits = 8;

   public:
   Fixed();
   Fixed(const int n);
   Fixed(const float n);
   Fixed(const Fixed&a);
   ~Fixed();
   Fixed& operator = (const Fixed&a);

   int      getRawBits( void ) const;
   void     setRawBits( int const raw );
   float    toFloat( void ) const;
   int      toInt( void ) const;

};

//An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.

std::ostream& operator <<(std::ostream &out, const Fixed& fixed);

#endif
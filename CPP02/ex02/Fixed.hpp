/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/09 12:22:08 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RESET_COLOR "\033[0m"

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
   bool operator == (const Fixed&a) const;
   bool operator != (const Fixed&a) const;
   bool operator > (const Fixed&a) const;
   bool operator < (const Fixed&a) const;
   bool operator >= (const Fixed&a) const;
   bool operator <= (const Fixed&a) const;
   Fixed operator + (const Fixed&a) const;
   Fixed operator - (const Fixed&a) const;
   Fixed operator * (const Fixed&a) const;
   Fixed operator / (const Fixed&a) const;
   Fixed operator ++ (int);
   Fixed operator -- (int);
   Fixed operator ++ (void);
   Fixed operator -- (void);



   int      getRawBits( void ) const;
   void     setRawBits( int const raw );
   float    toFloat( void ) const;
   int      toInt( void ) const;
   

   static Fixed&   min(Fixed& a, Fixed& b);
   static const Fixed&   min(const Fixed& a, const Fixed& b);
   static Fixed&   max(Fixed& a, Fixed& b);
   static const Fixed&   max(const Fixed& a, const Fixed& b);
};

//An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.

std::ostream& operator <<(std::ostream &out, const Fixed& fixed);

#endif
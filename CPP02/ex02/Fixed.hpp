/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/11 17:52:05 by rabustam         ###   ########.fr       */
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
   
   // copy assingment operator
   Fixed& operator = (const Fixed&a);
   
   // comparison operators
   bool operator == (const Fixed&a) const;
   bool operator != (const Fixed&a) const;
   bool operator > (const Fixed&a) const;
   bool operator < (const Fixed&a) const;
   bool operator >= (const Fixed&a) const;
   bool operator <= (const Fixed&a) const;

   // arithmetic
   Fixed operator + (const Fixed&a) const;
   Fixed operator - (const Fixed&a) const;
   Fixed operator * (const Fixed&a) const;
   Fixed operator / (const Fixed&a) const;

   // increment/decrement operators
   Fixed operator ++ (int);
   Fixed operator -- (int);
   Fixed operator ++ (void);
   Fixed operator -- (void);

   // static member functions
   static Fixed&   min(Fixed& a, Fixed& b);
   static const Fixed&   min(const Fixed& a, const Fixed& b);
   static Fixed&   max(Fixed& a, Fixed& b);
   static const Fixed&   max(const Fixed& a, const Fixed& b);

   // member functions
   int      getRawBits( void ) const;
   void     setRawBits( int const raw );
   float    toFloat( void ) const;
   int      toInt( void ) const;
};

std::ostream& operator <<(std::ostream &out, const Fixed& fixed);

#endif
#include<iostream>
#include<conio.h>
using namespace std;

template <typename T>
class Complex_t
{
private:
	T re, im;

public:

	Complex_t() : re(0), im(0) {};
	Complex_t(T real, T imaginary) :re(real), im(imaginary) {};
	
  
  Complex_t operator + (const Complex_t &c)
  {
	return Complex_t(re + c.re, im + c.im);
	}

　
	Complex_t operator - (const Complex_t &c)
	{
		return Complex_t(re - c.re, im - c.im);
	}
	Complex_t operator += (const Complex_t &c)
	{
		re += c.re;
		im += c.im;
		return *this;
	}
	Complex_t operator -=(const Complex_t &c)
	{
		re -= c.re;
		im -= c.im;
		return (*this);
	}
	Complex_t operator *=(const Complex_t &c)
	{
		re *= c.re;
		im *= c.im;
		return (*this);
	}

	Complex_t operator * (const Complex_t &c)
	{
		return Complex_t(re * c.re - im * c.im, re * c.im + im * c.re);
	}

　
	Complex_t operator / (const Complex_t &c)
	{
		Complex_t temp{ 0.0,0.0 };

		double r = c.re * c.re + c.im * c.im;
		if (r == 0)
			exit(1);

		temp.re = (re * c.re + im * c.im) / r;
		temp.im = (im * c.re - re * c.im) / r;

		return temp;
	}
	bool operator ==(Complex_t &c)
	{
		if ((re != c.re) || (im != c.im))
		{
			cout << "complex numbers are not equal" << endl;
			return 0;
		}
		else
		{
			cout << "numbers are equal" << endl;
			return 0;
		}
		return 1;

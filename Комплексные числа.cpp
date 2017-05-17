/*#include<iostream>
#include<conio.h>
using namespace std;

class Complex         
{
private:
	double re, im;      

public:

	Complex(double real, double imaginary) :re(real), im(imaginary) {}
	
	Complex operator + (const Complex &c)
	{
		return Complex(re + c.re, im + c.im);
	}

	
	Complex operator - (const Complex &c)
	{
		return Complex(re - c.re, im - c.im);
	}

	
	void operator * (int c)
	{
		cout << re*c << "," << im*c << endl;
	}

	void operator / (double c)
	{
		cout << re*pow(c, -1) << "," << im*pow(c, -1) << endl;
	}

	Complex operator * (const Complex &c)
	{
		return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
	}
	

	Complex operator / (const Complex &c)
	{
		Complex temp{ 0.0,0.0 };

		double r = c.re * c.re + c.im * c.im;
		if (r == 0)
			exit(1);
	
		temp.re = (re * c.re + im * c.im) / r;
		temp.im = (im * c.re - re * c.im) / r;

		return temp;
	}
	
private:
	
	Complex& operator = (Complex &c)
	{
		re = c.re;
		im = c.im;

		return (*this);
	}
	
	void print(ostream &)
	{
	cout<<"(" << re << ", " << im << ")";
	}
	
	friend ostream & operator << (ostream &,  Complex &);

};


ostream& operator<< (ostream &out,  Complex &c)
{
	c.print(out);
	return out;
}






int main()
{
	double re=0.0, im=0.0;
	int constant=0;
	
	try
	{
		cout << "re=";
		if (scanf_s("%lf", &re))
			cout << endl;
		else throw 1;
	}
	catch (int error)
	{
		exit(1);
	}
	try
	{
		cout << "im=";
		if (scanf_s("%lf", &im))
			cout << endl;
		else throw 1;
	}
	catch (int error)
	{
		exit(1);
	}
	Complex a(re, im);
	try
	{
		cout << "re=";
		if (scanf_s("%lf", &re))
			cout << endl;
		else throw 1;
	}
	catch (int error)
	{
		exit(1);
	}
	try
	{
		cout << "im=";
		if (scanf_s("%lf", &im))
			cout << endl;
		else throw 1;
	}
	catch (int error)
	{
		exit(1);
	}
	Complex b(re, im);

	cout << "a = " << a << "; b =" << b << endl;
	
	cout <<"a+b=" << a + b << endl;
	cout <<"a*b=" << a*b << endl;
	cout <<"a-b=" << a - b << endl;
	cout <<"a/b=" << a / b << endl;
	cout << "multiplication and division" << endl;
	cout << "const=" << endl;
	cin >> constant;
	cout << "mult on const" << endl;
	a*constant;
	try
	{
		if (constant != 0)
			cout << endl;
		else throw 1;
	}
	catch (int error)
	{
		_getch();
		exit(1);
	}
	cout << "div on const" << endl;
	a / constant;
	
	
	_getch();
	return 0;
}*/
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
	Complex_t(const Complex_t &c)
	{
		im = c.im;
		re = c.re;
	}
	Complex_t& operator =(const Complex_t &c)
	{
		re = c.re;
		im = c.im;
		return *this;
	}
	
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

	void operator * (int c)
	{
		cout << re*c << "," << im*c << endl;
	}

	void operator / (double c)
	{
		cout << re*pow(c, -1) << "," << im*pow(c, -1) << endl;
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

	}
friend ostream & operator << (ostream &out, const Complex_t<double> &c);
friend istream & operator >> (istream &in,  Complex_t<double> &c);
	
};




ostream & operator <<(ostream &out, const Complex_t<double> &c)
{
	out << "(" << c.re << ", " << c.im << ")";
	return out;
}

istream & operator >> (istream &in,  Complex_t<double> &c)
{
	in >> c.re>> c.im;
	return in;
}





int main()
{
	double re = 0.0, im = 0.0;
	int constant = 0;
	Complex_t<double> a{ 0.0, 0.0 };
	try
	{
		cout << "(re,im)=";
		if (cin>>a)
			cout;
		else throw 1;
	}
	catch (int error)
	{
		error = 0;
		exit(1);
	}
	
	Complex_t<double> b{ 0.0,0.0 };
	try
	{
		cout << "(re,im)=";
		if (cin>>b)
			cout;
		else throw 1;
	}
	catch (int error)
	{
		error = 0;
		exit(1);
	}
	

	cout << "a = " << a << "; b =" << b << endl;
	a == b; 
	
	a += a;
	cout << "a+=a" << a << endl;
	b -= {2, 3};
	cout << "b-={2,3} " << b << endl;
	a *= b;
	cout << "a*=b " << a << endl;
	cout << "a+b=" << a + b << endl;
	cout << "a*b=" << a*b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a/b=" << a / b << endl;
	cout << "multiplication and division" << endl;
	cout << "const=";
	cin >> constant;
	cout << "mult on const" << endl;
	a*constant;
	try
	{
		if (constant != 0)
			cout << endl;
		else throw 1;
	}
	catch (int error)
	{
		error = 0;
		_getch();
		exit(1);
	}
	cout << "div on const" << endl;
	a / constant;

	_getch();
	return 0;
}


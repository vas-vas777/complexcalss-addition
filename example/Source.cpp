int main()
{
	double re = 5.0, im = 7.0;

	
	Complex a(re, im);
	
	Complex b(re, im);



	cout << "a+b=" << a + b << endl;
	cout << "a*b=" << a*b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a/b=" << a / b << endl;

　
	_getch();
	return 0;
}

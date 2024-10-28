#ifndef HEAD
#define HEAD
#include <iostream>
using namespace std;
namespace A{	
	class Complex;
	Complex ComplexAdd(Complex x,Complex y);
	class Complex{
		private:
			int real;
			int img;
		public:
			Complex(int real=0,int img=0);
			void show();
			friend Complex ComplexAdd(Complex x,Complex y);
	};
}
#endif

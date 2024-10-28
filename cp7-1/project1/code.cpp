#include "head.hpp"
namespace A{
	Complex::Complex(int real,int img)
	{
		this->real=real;
		this->img=img;
		cout<<"복소수 "<<real<<"+"<<img<<"j 생성"<<endl;
	}
	void Complex::show()
	{
		cout<<real<<"+"<<img<<"j"<<endl;
	}
	Complex ComplexAdd(Complex x,Complex y){
		Complex sum;
		sum.real=x.real+y.real;
		sum.img=x.img+y.img;
		return sum;
        }
}

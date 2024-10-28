#include "head.hpp"  // "head.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Complex 클래스 생성자
	Complex::Complex(int real, int img)
	{
		// real과 img을 Complex의 멤버변수에 알맞게 저장
		this->real = real; this->img = img;
	}
	// 복소수의 실수부와 허수부 출력하는 Complex 클래스의 멤버함수
	void Complex::show()
	{
		// 복소수의 실수부와 허수부 출력
		cout << real << "+" << img << "j" << endl;
	}
	// ComplexManager 클래스의 두 Complex 객체를 더하는 멤버함수
	Complex ComplexManager::ComplexAdd(Complex x, Complex y)
	{
		Complex sum;   //Complex의 객체 생성
		sum.real = x.real + y.real;  // 실수부 합을 sum객체의 실수부에 저장
		sum.img = x.img + y.img;     // 허수부 합을 sum객체의 허수부에 저장
		return sum;  // 객체 sum 반환
	}
	// ComplexManager 클래스의 두 Complex 객체의 차를 구하는 멤버함수
	Complex ComplexManager::ComplexSub(Complex x, Complex y)
	{
		Complex sub;   //Complex의 객체 생성
		sub.real = x.real - y.real;  // 실수부 차를 sub객체의 실수부에 저장
		sub.img = x.img - y.img;     // 허수부 차을 sub객체의 허수부에 저장
		return sub;  // 객체 sub 반환
	}
}

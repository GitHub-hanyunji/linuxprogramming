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
	// * 연산자 함수
	Complex Complex::operator* (Complex y) 
	{
		Complex mul;    // 복소수의 곱을 저장할 객체 생성
		mul.real = this->real * y.real- this->img * y.img;  // 실수부의 곱 sum객체의 real변수에 저장
		mul.img = this->real * y.img + this->img * y.real;    // 허수부의 곱 sum객체의 img변수에 저장
		return mul;   // mul 객체 반환
	}
}

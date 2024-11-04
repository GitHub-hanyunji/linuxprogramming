#include "code.hpp"  // "code.hpp" 헤더파일 포함

// namespace A 구현
namespace A {
	// Complex 클래스 생성자
	Complex::Complex(int real, int img)
	{
		// real과 img을 Complex의 멤버변수에 알맞게 저장
		this->real = real; this->img = img;
		cout<<"복소수 "<< real << "+" << img << "j 생성" << endl;
	}
	// 복소수의 실수부와 허수부 출력하는 Complex 클래스의 멤버함수
	void Complex::show()
	{
		// 복소수의 실수부와 허수부 출력
		cout << real << "+" << img << "j" << endl;
	}
	// ++ 전위 연산자
	Complex& operator++ (Complex&c)
	{
		c.real++;   // c의 실수부 1 증가
		c.img++;    // c의 허수부 1 증가
		return c;   // 증가된 객체 c 참조로 반환
	}
	// -- 후위 연산자
	Complex operator-- (Complex& c,int x)
	{
		Complex tmp = c;   // c 객체의 값을 임시로 저장
		c.real--;    // c 객체 실수부 1 감소
		c.img--;     // c 객체 허수부 1 감소 
		return tmp;     // c의 감소하기 전의 값을 반환
	}
}

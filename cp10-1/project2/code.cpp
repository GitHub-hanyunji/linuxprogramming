#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Circle 클래스의 생성자
	Circle::Circle(int radius) { this->radius = radius; }
	// Circle 클래스의 반지름 값 반환하는 멤버함수
	int Circle::getRadius() { return radius; }
	// < 연산자 함수
	bool Circle::operator >(Circle c)
	{
		// 현재 객체의 반지름이 c의 반지름보다 큰 경우 true 반환
		if (this->radius > c.radius) return true;
		else return false;   // 아니면 false 반환
	}
}

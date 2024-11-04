#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// 생성자
	Circle::Circle(int radius)
	{
		// 반지름 초기화
		this->radius = radius;
	}
	// 반지름 출력해주는 멤버함수
	void Circle::show()
	{
		// 반지름 출력
		cout << "radius = " << radius << "인 원" << endl;
	}
	// friend 전위 증가 연산자 함수
	Circle& operator ++(Circle& c)
	{
		c.radius++;   // c 객체 반지름 1 증가
		return c;   // c를 참조로 반환
	}
	// friend 후위 증가 연산자 함수
	Circle operator ++(Circle& c, int x)
	{
		Circle tmp = c;   // c의 객체 값 tmp에 임시저장
		c.radius++;      // c 객체 반지름 1 증가
		return tmp;    // c의 반지름이 증가하기 전의 값을 반환
	}
}

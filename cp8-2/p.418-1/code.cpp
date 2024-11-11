#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Circle 클래스의 생성자
	Circle::Circle(int radius) { this->radius = radius; }
	// 반지름 값 반환
	int Circle::getRadius() { return radius; }
	// 반지름 값 설정
	void Circle::setRadius(int radius) { this->radius = radius; }
	// 원의 넓이 계산하여 반환
	double Circle::getArea() { return 3.14 * radius * radius; }

	// NamedCircle 클래스의 생성자(Circle 클래스의 생성자 명시적 호출)
	NamedCircle::NamedCircle(int radius, string name) :Circle(radius)
	{
		// 이름 설정
		this->name = name;
	}
	// 원의 정보 출력하는 멤버 함수
	void NamedCircle::show()
	{
		// 원의 정보 출력
		cout << "반지름이 " << Circle::getRadius() << "인 " << name << endl;
	}
}

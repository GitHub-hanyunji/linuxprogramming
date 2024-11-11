
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
	// 원의 정보 설정
	void NamedCircle::setCircle(int radius,string name)
	{
		// Circle 클래스의 setRadius 함수로 반지름 설정
		Circle::setRadius(radius);
		// 원의 이름 설정
		this->name = name;
	}
	// 원의 이름 반환
	string NamedCircle::getName() { return name; }
	// 원의 정보 입력받는 함수
	void input(NamedCircle* pizza)
	{
		// 원의 반지름, 이름을 저장할 변수들
		int radius; string name;
		// 원의 반지름, 이름 입력요청 메시지 출력
		cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
		// 5개의 원의 정보를 입력받아 설정하는 반복문
		for (int i = 0; i < 5; i++)
		{
			// 사용자에게 몇번째 입력인지 표시
			cout << i + 1 << ">> ";
			// 반지름 이름 입력받기
			cin >> radius >> name;
			// 반지름 이름 설정
			pizza[i].setCircle(radius, name);
		}
	}
	// 가장 넓이가 큰 원을 찾는 함수
	NamedCircle Max(NamedCircle* pizza)
	{
		// 배열의 첫 번째 원을 가장 큰 넓이의 원으로 초기 설정
		NamedCircle max = pizza[0];
		// 배열의 모든 원을 순회하며 넓이를 비교하는 반복문
		for (int i = 0; i < 5; i++)
		{
			// 현재 저장된 max 원보다 현재 원의 넓이가 더 큰 경우
			if (max.getArea() < pizza[i].getArea())
				max = pizza[i];  // max값 변경
		}
		return max;  // max 반환
	}
}

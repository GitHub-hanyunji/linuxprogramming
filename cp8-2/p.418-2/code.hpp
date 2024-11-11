#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
#include<string>   // String 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	// Circle 클래스
	class Circle {
		int radius;  // 반지름
	public:
		// 생성자
		Circle(int radius = 0);
		int getRadius();  // 반지름 값 반환하는 멤버 함수
		void setRadius(int radius);  // 반지름 값 설정하는 멤버 함수
		double getArea();  // 원의 넓이 계산하여 반환하는 멤버 함수
	};
	// Circle 클래스를 상속받은 NamedCircle 클래스
	class NamedCircle :public Circle {
		string name;  // 원의 이름
	public:
		// 생성자
		NamedCircle(int radius=0, string name="");
		// 원의 정보 설정하는 멤버 함수
		void setCircle(int radius, string name);
		// 원의 이름 반환하는 멤버 함수
		string getName();
	};
	// 원의 정보를 입력받는 함수
	void input(NamedCircle* pizza);
	// 가장 넓이가 큰 원을 찾는 함수
	NamedCircle Max(NamedCircle* pizza);
}
#endif // !HEAD

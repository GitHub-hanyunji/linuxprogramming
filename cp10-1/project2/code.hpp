#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	// Circle 클래스
	class Circle {
		int radius;   //  반지름
	public:
		// 생성자
		Circle(int radius = 1);
		int getRadius();  // 반지름 반환하는 멤버 함수
		bool operator >(Circle c);  // < 연산자 함수
	};
	template <class T>   // 템플릿 함수 선언
	// 두 개의 매개 변수를 비교하여 큰 값을 리턴
	T bigger(T a, T b)
	{	// a의 반지름이 b보다 크면 a 반환
		if (a > b) return a;
		else return b;  // 아니면 b 반환
	}
}
#endif // !HEAD

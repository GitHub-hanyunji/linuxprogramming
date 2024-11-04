#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	// Circle 클래스
	class Circle {
		int radius;   // 반지름
	public:
		// 생성자
		Circle(int radius = 0);
		// 반지름 출력하는 멤버함수
		void show();
		// friend 전위 증가 연산자 함수
		friend Circle& operator ++(Circle& c);
		// friend 후위 증가 연산자 함수
		friend Circle operator ++(Circle& c, int x);
	};
}
#endif // !HEAD

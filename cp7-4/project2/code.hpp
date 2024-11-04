#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	class Complex {
	private:
		int real;   // 실수부
		int img;    // 허수부
	public:
		// 생성자
		Complex(int real = 0, int img = 0);
		// 복소수의 실수부와 허수부 출력하는 멤버함수
		void show();
		// friend ++ 전위 연산자 함수
		friend Complex& operator++ (Complex& c);
		// friend -- 후위 연산자 함수
		friend Complex operator-- (Complex&c,int x);
	};
}
#endif // !HEAD

#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	class Complex;     // 클래스 Complex 선언
	// 두 Complex 객체의 합을 구해 그 값을 Complex 객체에 저장한 후 반환하는 함수
	Complex ComplexAdd(Complex x, Complex y);
	// 클래스 Complex
	class Complex {
	private:
		int real;   // 실수부
		int img;    // 허수부
	public:
		// 생성자
		Complex(int real = 0, int img = 0);
		// 복소수의 실수부와 허수부 출력하는 멤버함수
		void show();
		// ComplexAdd 함수 friend로 선언
		friend Complex ComplexAdd(Complex x, Complex y);
	};
}
#endif // !HEAD


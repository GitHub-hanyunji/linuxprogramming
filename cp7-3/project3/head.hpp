#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	// Power 클래스
	class Power {
		int kick;    // 킥 
		int punch;   // 펀치
	public:
		// 생성자
		Power(int k = 0, int p = 0);
		void show();  // kick과 punch의 값을 출력하는 멤버 함수
		// - 연산자 함수
		Power operator- (int a);
	};
}
#endif // !HEAD


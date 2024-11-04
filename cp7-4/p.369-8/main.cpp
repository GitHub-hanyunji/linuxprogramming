#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// Circle 클래스 a,b 객체 생성
	Circle a(5), b(4);
	++a;   // a 반지름 1 증가
	b = a++;  // a 반지름 1 후위 증가된 값 b에 저장
	a.show();  // a의 반지름 출력
	b.show();  // b의 반지름 출력
	return 0;
}

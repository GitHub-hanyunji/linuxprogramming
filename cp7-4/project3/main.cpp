#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	//Power 객체 a,b 생성
	Power a(3, 5), b;
	a.show();   // a의 kick,punch 값 출력
	b.show();   // b의 kick,punch 값 출력
	b = 2*a;  // a 객체에 2를 곱한값 b에 저장
	a.show();  // a의 kick,punch 값 출력
	b.show();   // b의 kick,punch 값 출력
	return 0;   // 프로그램 종료
}

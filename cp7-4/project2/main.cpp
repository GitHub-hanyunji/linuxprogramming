#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	Complex x(2, 3); // Complex 클래스 x객체 생성
	++x;  // 전위 증가 연산자 사용
	// 증가 결과 출력
	cout << "증가결과 ";
	x.show();
	x--;   // 후위 감소 연산자 사용
	// 감소 결과 출력
	cout << "감소결과 ";
	x.show();
	return 0;
}

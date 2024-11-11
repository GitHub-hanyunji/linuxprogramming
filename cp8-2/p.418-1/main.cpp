#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// NamedCircle 클래스의 waffle 객체 생성
	NamedCircle waffle(3, "waffle");
	waffle.show();  // waffle의 
	return 0;   // 프로그램 종료
}

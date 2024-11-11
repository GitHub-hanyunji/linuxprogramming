#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	Circle x(0, 0, 2);    // Circle 클래스의 객체 생성
	Rect y(1, 1, 5, 10);  //Rect 클래스의 객체 생성
	Triangle z(2, 2, 5, 10);  //Triangle 클래스의 객체 생성
	x.show();   //x의 show 함수 호출
	y.show();   //y의 show 함수 호출
	z.show();   //z의 show 함수 호출
	return 0;    // 프로그램 종료
}

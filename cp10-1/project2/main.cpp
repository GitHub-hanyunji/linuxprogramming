#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// 정수 a,b,c 선언
	int a = 20, b = 50, c;
	c = bigger(a, b);   // c에 a와 b 중 큰 값 저장
	// c 출력
	cout << "20과 50중 큰 값은 " << c << endl;
	// Circle 클래스의 donut, pizza ,y 객체 선언
	Circle donut(10), pizza(20), y;
	y = bigger(donut, pizza);   // y에 donut, pizza 중 반지름 값이 더 큰 객체 저장
	// y의 반지름 출력
	cout << "donut과 pizza중 큰 반지름은 " << y.getRadius()<< endl;
	return 0;
}

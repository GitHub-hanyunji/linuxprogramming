#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	int a[5] = { -5, 10, 30, 20, 6 };  // 정수 배열
	double b[4] = { 3.14, 1.5, -6.0, 0.5 };  // 실수 배열
	char c[3] = { 'a', 'x','p' };   // 문자 배열
	// 정수 배열 a의 최대값 출력
	cout << "정수배열의 최대값은 " << Max(a, 5) << endl;
	// 실수 배열 b의 최대값 출력
	cout << "실수배열의 최대값은 " << Max(b, 4) << endl;
	// 문자 배열 c의 최대값 출력
	cout << "문자배열의 최대값은 " << Max(c, 3) << endl;
	return 0; // 프로그램 종료
}

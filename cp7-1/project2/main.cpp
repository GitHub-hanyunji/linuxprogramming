#include "head.hpp"   //"head.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// Complex의 객체 x,y,sum 생성
	Complex x(2, 3), y(-5, 10), sum;
	ComplexManager man;   // ComplexManager의 객체 man 생성
	// x와 y의 합 구해 sum에 저장
	sum = man.ComplexAdd(x, y);
	// x와 y의 두 복소수 합 출력
	cout << "두 복소수의 합은 ";
	sum.show();
	return 0;   // 프로그램 종료
}

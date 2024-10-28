#include "head.hpp"   //"head.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// Complex의 객체 x,y,sum,sub 생성
	Complex x(5, 5), y(2, 2), sum, sub;
	ComplexManager man;   // ComplexManager의 객체 man 생성
	// x와 y의 합 구해 sum에 저장
	sum = man.ComplexAdd(x, y);
	// x와 y의 두 복소수 합 출력
	cout << "두 복소수의 합은 ";
	sum.show();
	// x와 y의 차 구해 sub에 저장
	sub = man.ComplexSub(x, y);
	// x와 y의 두 복소수 차 출력
	cout << "두 복소수의 차은 ";
	sub.show();
	return 0;   // 프로그램 종료
}

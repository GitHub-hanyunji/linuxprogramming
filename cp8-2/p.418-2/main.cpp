#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// NamedCircle 객체 배열 선언
	NamedCircle pizza[5];
	// input 함수 호출하여 5개의 피자 정보 입력
	input(pizza);
	// Max 함수로 가장 넓이가 큰 피자 찾기
	NamedCircle max = Max(pizza);
	// 가장 면적이 큰 피자 출력
	cout << "가장 면적이 큰 피자는 " << max.getName() << "입니다." << endl;
	return 0;   // 프로그램 종료
}

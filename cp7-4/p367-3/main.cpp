#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// Book 클래스의 book 객체 생성
	Book book("벼룩시장", 0, 50);
	// 가격이 0이면 공짜
	if (!book) cout << "공짜다" << endl;
	else
		cout << "공짜가 아니다.";
}

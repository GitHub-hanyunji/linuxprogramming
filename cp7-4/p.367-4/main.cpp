#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	// Book 클래스 a객체 생성
	Book a("청춘", 20000, 300);
	string b;  // 문자열을 저장할 변수
	// 책 이름 입력 요청 메시지 출력
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);  // 문자열 입력
	// 문자열 b와 객체 a의 제목의 사전순 비교
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!"<< endl;
	return 0;
}

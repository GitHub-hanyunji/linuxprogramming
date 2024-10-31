#include "head.hpp"  // "head.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// 생성자
	Power::Power(int k, int p)
	{
		// kick, punch를 k,p 값으로 초기화
		this->kick = k; this->punch = p;
	}
	// kick과 punch 값을 출력하는 멤버함수
	void Power::show()
	{
		// kick, punch 값 출력
		cout << "kick=" << this->kick << ",punch=" << punch << endl;
	}
	// - 연산자 함수
	Power Power::operator- (int a)
	{
		Power b; // 결과를 담을 객체 b 생성
		// b의 kick 변수에 현재객체kick-a의 값 저장
		b.kick = this->kick - a;  
		// b의 punch 변수에 현재객체punch-a의 값 저장
		b.punch = this->punch - a;
		return b;  // b 객체 반환
	}
}

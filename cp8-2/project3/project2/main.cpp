#include "code.hpp"   //"code.hpp" 헤더파일 포함
using namespace A;   // namespace A 사용
// main 함수
int main(void)
{
	SmartTV htv;      //SmartTV 클래스의 htv 객체 생성
	htv.setSmartTV(50, false, "192.0.0.2");  // htv 객체의 속성 설정
	// htv의 스크린 크기 출력
	cout << "size = " << htv.getSize() << endl;
	// htv의 비디오 입력 여부 출력
	cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;
	// htv의 ip 주소 출력
	cout << "IP = "<< htv.getIpAddr() << endl;
	return 0;   // 프로그램 종료
}

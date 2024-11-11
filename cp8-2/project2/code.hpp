#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
#include<string>   // String 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
    // TV 클래스
    class TV {
        int size; // 스크린 크기
    public:
        TV();   // 생성자
        // size 설정 멤버 함수
        void setTV(int size);
        int getSize();  // size 값 반환하는 멤버함수
    };
    // WideTV 클래스
    class WideTV : public TV { // TV를 상속받는 WideTV
        bool videoIn;   // 비디오 입력 설정
    public:
        WideTV();  // 생성자
        // 비디오 입력 설정 멤버 함수
        void setWideTV(bool videoln);
        // 비디오 입력 설정 값 출력하는 멤버 함수
        bool getVideoIn();
    };
    class SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
        string ipAddr; // 인터넷 주소
    public:
        SmartTV();   // 생성자
        // 스마트 TV 설정 함수
        void setSmartTV(int size, bool videoln, string ip);
        string getIpAddr();  //ip 주소 반환하는 멤버 함수
    };
}
#endif // !HEAD

#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
    // TV 클래스의 생성자
    TV::TV() { cout << "TV 생성" << endl; }
    // size 설정 멤버 함수
    void TV::setTV(int size) { this->size = size; }
    // size 값 반환하는 멤버함수
    int TV::getSize() { return size; }

    // WideTV 클래스의 생성자
    WideTV::WideTV() { cout << "WideTv 생성" << endl; }
    // 비디오 입력 설정 멤버 함수
    void WideTV::setWideTV(bool videoln) { this->videoIn =videoln ; }
    // 비디오 입력 설정 값 출력하는 멤버 함수
    bool WideTV::getVideoIn() { return videoIn; }

    // SmartTV 클래스의 생성자
    SmartTV::SmartTV() { cout << "SmartTV 생성" << endl; }
    // 스마트 TV 설정 함수
    void SmartTV::setSmartTV(int size, bool videoln, string ip)
    {
        // TV클래스의 setTV함수, WideTV 클래스의 setWideTV 함수로 size, videoln 값 설정
        TV::setTV(size); WideTV::setWideTV(videoln);
        // ip 주소 설정
        this->ipAddr = ip;
    }
    //ip 주소 반환하는 멤버 함수
    string SmartTV::getIpAddr() { return ipAddr; }
}

#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	// Shape 클래스
	class Shape {
	protected:
		int x;   // x 좌표
		int y;   // y 좌표
	};
	// 부모 클래스 Shape를 상속받는 Circle 클래스
	class Circle :public Shape {
		int radius;    // 반지름
	public:
		// 좌표 x,y, 반지름 값 설정하는 멤버 함수
		void setCircle(int x, int y, int r);
		void show();  // 좌표 x,y, 반지름 값 출력하는 멤버 함수
	};
	// 부모 클래스 Shape를 상속받는 Rect 클래스
	class Rect :public Shape {
		int width;   // 폭
		int height;  // 높이
	public:
		// 좌표 x,y, 폭, 높이 값 설정하는 멤버 함수
		void setRect(int x, int y, int w, int h);
		void show();  // 좌표 x,y, 폭, 높이 값 출력하는 멤버 함수
	};
	// 부모 클래스 Shape를 상속받는 Triangle 클래스
	class Triangle :public Shape {
		int width;  // 밑변
		int height;  // 높이
	public:
		// 좌표 x,y,밑변, 높이 값 설정하는 멤버 함수
		void setTriangle(int x, int y, int w, int h);
		void show();  // 좌표 x,y, 밑변, 높이 값 출력하는 멤버 함수
	};
}
#endif // !HEAD

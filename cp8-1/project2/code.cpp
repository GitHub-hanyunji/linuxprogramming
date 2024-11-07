#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Circle 클래스의 좌표 (x, y)와 반지름 r을 설정하는 멤버함수
	void Circle::setCircle(int x, int y, int r)
	{
		this->x = x; this->y = y;  // x,y 좌표 값 설정
		this->radius = r;   // 반지름 설정
	}
	// Circle 클래스의 show 멤버 함수
	void Circle::show()
	{
		// 좌표 x,y, 반지름 출력
		cout << "좌표(" << x << ',' << y << ")에 반지름" << radius << "인 원" << endl;  // 반지름 출력
	}
	// Rect 클래스의 좌표 (x, y)와 폭 w, 높이 h를 설정하는 멤버함수
	void Rect::setRect(int x, int y, int w, int h)
	{
		// x,y 좌표 값 설정
		this->x = x; this->y = y;  
		// 폭, 높이 설정
		this->width = w; this->height = h;   
	}
	// Rect 클래스의 show 멤버 함수
	void Rect::show()
	{
		// 좌표 x,y, 폭, 높이 출력
		cout << "좌표(" << x << ',' << y << ") 에 폭" << width << ", 높이" << height << "인 직사각형" << endl;
	}
	// Rect 클래스의 좌표 (x, y)와 폭 w, 높이 h를 설정하는 멤버함수
	void Triangle::setTriangle(int x, int y, int w, int h)
	{
		// x,y 좌표 값 설정
		this->x = x; this->y = y;  
		// 밑변, 높이 설정
		this->width = w; this->height = h;
	}
	// Triangle 클래스의 show 멤버 함수
	void Triangle::show()
	{
		// 좌표 x,y, 밑변, 높이 출력
		cout << "좌표(" << x << ',' << y << ")에 밑변" << width << ", 높이" << height << "인 삼각형" << endl;
	}
}

#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Shape 클래스의 x,y 좌표 설정하는 멤버 함수
	void Shape::set(int x, int y)
	{
		// x,y 좌표 설정
		this->x = x; this->y = y;
	}
	// Shape 클래스의 show 멤버함수
	void Shape::show()
	{
		// 좌표 x,y 값 출력
		cout << "좌표 (" << x << ',' << y << ')';
	}
	// Circle 클래스의 좌표 (x, y)와 반지름 r을 설정하는 멤버함수
	void Circle::setCircle(int x, int y, int r)
	{
		// 부모 클래스의 set 함수를 호출하여 x, y 좌표 설정
		Shape::set(x, y); 
		this->radius = r;   // 반지름 설정
	}
	// Circle 클래스의 show 멤버 함수
	void Circle::show()
	{
		// 부모 클래스의 show 함수 호출하여 x,y 좌표 출력
		Shape::show(); 
		cout << "에 반지름" << radius << "인 원" << endl;  // 반지름 출력
	}
	// Rect 클래스의 좌표 (x, y)와 폭 w, 높이 h를 설정하는 멤버함수
	void Rect::setRect(int x, int y, int w, int h)
	{
		// 부모 클래스의 set 함수를 호출하여 x, y 좌표 설정
		Shape::set(x, y);
		this->width = w; this->height = h;   // 폭, 높이 설정
	}
	// Rect 클래스의 show 멤버 함수
	void Rect::show()
	{
		// 부모 클래스의 show 함수 호출하여 x,y 좌표 출력
		Shape::show();  
		// 폭, 높이 출력
		cout << "에 폭" << width << ", 높이" <<height<<"인 직사각형"<< endl;
	}
	// Rect 클래스의 좌표 (x, y)와 밑변 w, 높이 h를 설정하는 멤버함수
	void Triangle::setTriangle(int x, int y, int w, int h)
	{
		// 부모 클래스의 set 함수를 호출하여 x, y 좌표 설정
		Shape::set(x, y);
		// 밑변, 높이 설정
		this->width = w; this->height = h;
	}
	// Triangle 클래스의 show 멤버 함수
	void Triangle::show()
	{
		// 부모 클래스의 show 함수 호출하여 x,y 좌표 출력
		Shape::show();
		// 밑변, 높이 출력
		cout << "에 밑변" << width << ", 높이" << height << "인 삼각형" << endl;
	}
}

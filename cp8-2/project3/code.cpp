#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Shape 클래스의 생성자
	Shape::Shape(int x, int y)
	{
		// x,y 좌표 설정
		this->x = x; this->y = y;
		cout << "Shape 생성, ";   // Shape 생성 메시지 출력
	}
	// Shape 클래스의 show 멤버함수
	void Shape::show()
	{
		// 좌표 x,y 값 출력
		cout << "좌표 (" << x << ',' << y << ')';
	}
	// Shape 클래스의 소멸자 
	Shape::~Shape()
	{
		cout << "Shape 소멸" << endl;
	}
	// Circle 클래스의 생성자(부모 클래스 생성자 명시적 호출)
	Circle::Circle(int x, int y, int r): Shape(x, y)
	{
		this->radius = r;   // 반지름 초기화
		cout << "Circle 생성" << endl;   // Circle 객체 생성 메시지 출력
	}
	// Circle 클래스의 show 멤버 함수
	void Circle::show()
	{
		// 부모 클래스의 show 함수 호출하여 x,y 좌표 출력
		Shape::show();
		cout << "에 반지름" << radius << "인 원" << endl;  // 반지름 출력
	}
	// Circle 클래스의 소멸자
	Circle::~Circle()
	{
		cout << "Circle 소멸, ";   // Circle 클래스 객체 소멸 메시지 출력
	}
	// Rect 클래스의 생성자(부모 클래스 생성자 명시적 호출)
	Rect::Rect(int x, int y, int w, int h):Shape(x,y)
	{
		this->width = w; this->height = h;   // 폭, 높이 설정
		cout << "Rect 생성" << endl;   // Circle 객체 생성 메시지 출력
	}
	// Rect 클래스의 show 멤버 함수
	void Rect::show()
	{
		// 부모 클래스의 show 함수 호출하여 x,y 좌표 출력
		Shape::show();
		// 폭, 높이 출력
		cout << "에 폭" << width << ", 높이" << height << "인 직사각형" << endl;
	}
	// Rect 클래스의 소멸자
	Rect::~Rect()
	{
		cout << "Rect 소멸, ";  // Rect 클래스 객체 소멸 메시지 출력
	}
	// Triangle 클래스의 생성자(기본 클래스의 생성자 명시적 호출)
	Triangle::Triangle(int x, int y, int w, int h):Shape(x,y)
	{
		// 밑변, 높이 설정
		this->width = w; this->height = h;
		cout << "Triangle 생성" << endl;   // Triangle 클래스 객체 소멸 메시지 출력
	}
	// Triangle 클래스의 show 멤버 함수
	void Triangle::show()
	{
		// 부모 클래스의 show 함수 호출하여 x,y 좌표 출력
		Shape::show();
		// 밑변, 높이 출력
		cout << "에 밑변" << width << ", 높이" << height << "인 삼각형" << endl;
	}
	// Triangle 클래스의 소멸자
	Triangle::~Triangle()
	{
		cout << "Triangle 소멸, ";  // Triangle 클래스 객체 소멸 메시지 출력
	}
}

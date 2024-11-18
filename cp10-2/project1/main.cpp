#include<iostream>     // 표준 입출력 라이브러리
using namespace std;   // 표준 namespace 사용
template<class T1, class T2> // 템플릿 선언
// GClass 클래스
class GClass {
	T1 data1;   // data1
	T2 data2;   // data2
public:
	GClass();     // 생성자
	void swap();  // data1과 data2 값 교환하는 swap 멤버 함수
	void set(T1 x, T2 y);   // data1,data2 값 설정하는 멤버함수
	void get(T1& x, T2& y);  // data1, data2 값 반환하는 멤버함수
};
template <class T1, class T2>		// 템플릿 선언
// GClass<T1,T2> 클래스의 생성자
GClass<T1, T2>::GClass() { data1 = 0; data2 = 0; }
template <class T1, class T2>		// 템플릿 선언
// GClass<T1,T2> 클래스의 swap 멤버 함수
void GClass<T1, T2>::swap()
{
	T1 temp;   // 임시 변수
	temp = this->data1;   // temp에 data1의 값 저장
	this->data1 = this->data2;  // data1에 data2의 값 저장
	this->data2 = temp;   // data2에 temp 값 저장 
}
template <class T1, class T2>		// 템플릿 선언
// GClass<T1,T2> 클래스의 set 멤버 함수
void GClass<T1, T2>::set(T1 a, T2 b) { data1 = a; data2 = b; }
template <class T1, class T2>		// 템플릿 선언
// GClass<T1,T2> 클래스의 get 멤버 함수
void GClass<T1, T2>::get(T1& a, T2& b) { a = data1; b = data2; }
// main 함수
int main(void)
{
	int a, b;     // 변수 선언
	GClass<int, int> x;   // GClass<T1,T2> 클래스의 객체 x 선언
	x.set(2, 5);   // set 멤버함수로 멤버변수 설정
	x.get(a, b);   // get 멤버함수로 변수 a,b에 data1,data2값 저장
	// a, b 값 출력
	cout << "a=" << a << '\t' << "b=" << b << endl;
	x.swap();  // swap 함수로 data1, data2의 값 교환
	x.get(a, b);  // get 멤버함수로 변수 a,b에 data1,data2값 저장
	// a, b 값 출력
	cout << "a=" << a << '\t' << "b=" << b << endl;
	double c, d;  // 변수 선언
	GClass<double, double> y;  // GClass<T1,T2> 클래스의 객체 y 선언
	y.set(3.14, 6.28); // set 멤버함수로 멤버변수 설정
	y.get(c, d); // get 멤버함수로 변수 c, d에 data1,data2값 저장
	// c,d 값 출력
	cout << "c=" << c << '\t' << "d=" << d << endl;
	y.swap();  // swap 함수로 data1, data2의 값 교환
	y.get(c, d);   // get 멤버함수로 변수 c,d에 data1,data2값 저장
	// c, d 값 출력
	cout << "c=" << c << '\t' << "d=" << d << endl;
	return 0;   // 프로그램 종료
}

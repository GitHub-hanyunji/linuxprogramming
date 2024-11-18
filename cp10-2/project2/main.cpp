#include<iostream>     // 표준 입출력 라이브러리
using namespace std;   // 표준 namespace 사용
template<class T> // 템플릿 선언
// Container 클래스
class Container {
	T* p;     // 동적 배열
	int size;  // 배열 크기
public:
	Container(int n);     // 생성자
	~Container();        // 소멸자
	// 배열 index 위치에 값 설정하는 멤버함수
	void set(int index, T value) { p[index] = value; }
	T get(int index);  // 배열 index 위치 값 반환
};
template <class T>		// 템플릿 선언
// Container<T>클래스의 생성자
Container<T>::Container(int n)
{
	size = n;      // 배열 크기 설정
	p = new T[n];  // n만큼 동적 메모리 할당
	if (!p) return;  // 메모리 할당 실패시 반환
}
template <class T>		// 템플릿 선언
// Container<T>클래스의 소멸자
Container<T>::~Container() { if (p) delete[]p; }
template <class T>		// 템플릿 선언
// Container<T>클래스의 get 멤버 함수
T Container<T>::get(int index)
{
	return p[index];  // 배열 p의 index 위치 값 반환
}
// main 함수
int main(void)
{
	Container<char> c(26);   // Container<T>클래스의 객체 c 선언
	// 26번 반복
	for (int i = 0; i < 26; i++)
		c.set(i, 'a' + i); // 'a'부터 'z'까지의 알파벳을 배열에 저장
	// 배열에 저장된 알파벳을 역순으로 출력
	for (int i = 25; i >= 0; i--)
		cout << c.get(i);   // 배열에서 값을 가져와 출력
	cout << endl;  // 줄 바꿈
	return 0;   // 프로그램 종료
}

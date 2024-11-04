#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
#include<string>
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	// Book 클래스
	class Book {
		string title;       //제목
		int price, pages;  //가격, 페이지 수
	public:
		// 생성자
		Book(string title = "", int price = 0, int pages = 0);
		void show();  // 제목, 가격, 페이지 수 출력하는 멤버함수
		string getTitle();   // 제목 반환하는 멤버함수
		// 공짜 책인지 판별하는 ! 연산자 함수
		friend bool operator! (Book b);
	};
}
#endif // !HEAD

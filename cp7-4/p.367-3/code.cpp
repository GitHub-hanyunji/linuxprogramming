#include "code.hpp"  // "code.hpp" 헤더파일 포함
// namespace A 구현
namespace A {
	// Book 클래스 생성자
	Book::Book(string title, int price, int pages)
	{
		// 멤버 변수 초기화
		this->title = title; this->price = price; this->pages = pages;
	}
	// 제목, 가격, 페이지 수 출력하는 멤버 함수
	void Book::show()
	{
		// 현재 상태 출력
		cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
	}
	// 책 제목 반환하는 멤버함수
	string Book::getTitle()
	{
		return title;  // 제목 반환
	}
	// 공짜 책인지 판별하는 ! 연산자 함수
	bool operator! (Book b)
	{
		// b객체의 가격이 0이면
		if (b.price == 0)
			return true;  //true 반환
		// 아니면 false 반환
		else
			return false;
	}
}

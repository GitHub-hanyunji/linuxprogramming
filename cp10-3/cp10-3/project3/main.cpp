#include<iostream>     // 표준 입출력 라이브러리
#include<vector>       // 벡터 라이브러리
#include<string>       // 문자열 라이브러리
using namespace std;   // 표준 namespace 사용
// main 함수
int main(void)
{
	string n, last;      // 변수 선언
	vector<string>v;    // 문자열 벡터 선언
	vector<string>::iterator it;   // iterator 선언
	// 5개의 문자열 입력받는 반복문
	for (int i = 0; i < 5; i++)
	{
		// 문자열 입력 요청 메시지 출력
		cout << "문자열을 입력하시오:";
		cin >> n;   // 문자열 입력
		v.push_back(n);   // 벡터 v에 n 추가
	}
	// iterator로 벡터 v 순환
	for (it = v.begin(); it < v.end(); it++)
	{
		// 벡터 v의 시작값일 때
		if (it == v.begin()) {
			last = *it;  // last 변수 벡터 v 값으로 초기화
		}
		// last보다 현재 문자열이 사전순으로 뒤에 있다면
		if (last < *it)
			last = *it;  // last 변수 현재 문자열로 갱신
	}
	// last 출력
	cout << "사전에서 제일 뒤에 나오는 단어는 " << last << "입니다" << endl;
	return 0;   // 프로그램 종료
}

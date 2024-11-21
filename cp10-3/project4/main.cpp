#include<iostream>     // 표준 입출력 라이브러리
#include<vector>	   // 벡터 라이브러리
using namespace std;   // 표준 namespace 사용
// main 함수
int main(void)
{
	int n, sum=0;      // 변수 선언
	vector<int>v;    // 정수형 벡터 선언
	// 정수 입력 요청 메시지 출력
	cout << "숫자를 입력하세요: ";
	// 정수 5개 입력받는 반복문
	for (int i = 0; i < 5; i++)
	{
		cin >> n;   // n에 정수 입력받고
		v.push_back(n);  // n을 push_back으로 벡터 v에 추가
	}
	vector<int>::iterator it;  // iterator 선언
	cout << "초기 벡터 원소: ";   // 초기 벡터 원소 출력 메시지 
	// iterator로 벡터 v 순환
	for (it = v.begin(); it != v.end();)
	{
		cout << *it << ' ';
		if (*it < 0)   // 현재원소가 음수면
			it=v.erase(it);   // erase()를 사용해 지우기
		else  //아니면
			it++;  // 다음 포인터로 이동
	}
	// 음수를 삭제한 후의 벡터 원소 출력
	cout << endl<<"음수를 삭제 후 벡터원소: ";
	for (it = v.begin(); it != v.end(); it++) {

		cout << *it << ' ';   // 원소 출력
		sum += *it;   // 원소의 합
	}
	// 양수의 평균 값 출력
	cout << endl<<"평균값: "<<(double)sum/v.size()<<endl;
	return 0;   // 프로그램 종료
}

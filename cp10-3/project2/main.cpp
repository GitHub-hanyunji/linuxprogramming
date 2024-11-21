#include<iostream>     // 표준 입출력 라이브러리
#include<vector>	   // 벡터 라이브러리
using namespace std;   // 표준 namespace 사용
// main 함수
int main(void)
{
	int n, max, min;      // 변수 선언
	vector<int>v;    // 정수형 벡터 선언
	// 정수 4개 입력 요청 메시지 출력
	cout << "정수 4개를 입력하시오:";
	// 정수 4개 입력받는 반복문
	for (int i = 0; i < 4; i++)
	{
		cin >> n;   // n에 정수 입력받고
		v.push_back(n);  // n을 push_back으로 벡터 v에 추가
	}
	vector<int>::iterator it;  // iterator 선언
	max = min = *(v.begin());  // max와 min에 벡터 v의 시작 위치의 값 저장
	// iterator로 벡터 v 순환
	for (it = v.begin(); it < v.end(); it++)
	{
		// max 보다 현재 요소가 크면
		if (max < *it)
			max = *it;  // max 값 현재 요소로 갱신
		// min가 현재 요소보다 크면
		if (min > *it)
			min = *it;  //min 값 현재 요소로 갱신
	}
	// max, min 출력
	cout << "최대값은 " << max << ", 최솟값은 " << min << "입니다" << endl;
	return 0;   // 프로그램 종료
}

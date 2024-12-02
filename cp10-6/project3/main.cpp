#include <iostream>  // 표준 입출력 라이브러리
#include<vector>
using namespace std; // 표준 namespace 사용
// main 함수
int main(void)
{
	// 2차원 벡터 초기화
	vector<vector<int>>arr= {
		{-5,2,35},
		{-20,5,100},
		{-75,5,-25}
	};
	int x = 0, y = 0;     // 최대값 벡터 위치 저장하는 변수
	int max = arr.at(x).at(y);  // 최대값 벡터 첫번째요소로 임시저장
	// 2차원 벡터 요소 순회하는 반복문
	for (int i = 0; i < (int)arr.size(); i++)
	{
		for (int j = 0; j < (int)arr.at(i).size(); j++)
		{
			// 현재 요소가 max보다 크면
			if (max < arr.at(i).at(j))
			{
				// max 값 현재요소 값으로 저장
				max = arr.at(i).at(j);
				x = i; y = j;  // 현재 요소 위치 저장
			}
		}
	}
	// 최댓값출력
	cout << "최댓값은 " << max << endl;
	// 행렬에서의 최댓값 위치 출력
	cout << "위치는 " << x + 1 << "행 " << y + 1 << "열" << endl;
	return 0;   // 프로그램 종료
}

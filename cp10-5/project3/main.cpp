#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// main 함수
int main(void)
{
	// 2차원 배열 초기화
	int arr[3][3] = {
		{-5,2,35},
		{-20,5,100},
		{-75,5,-25}
	};
	int x = 0, y = 0;     // 최대값 배열 위치 저장하는 변수
	int max = arr[x][y];  // 최대값 배열 첫번째요소로 임시저장
	// 2차원 배열 요소 순회하는 반복문
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// 현재 요소가 max보다 크면
			if (max < arr[i][j])
			{
				// max 값 현재요소 값으로 저장
				max = arr[i][j];
				x = i; y = j;  // 현재 요소 위치 저장
			}
		}
	}
	// 최댓값출력
	cout << "최댓값은 " << max << endl;
	// 행렬에서의 최댓값 위치 출력
	cout << "위치는 " << x+1 << "행 " << y+1 << "열" << endl;
	return 0;   // 프로그램 종료
}

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
	// 수정행렬 출력
	cout << "수정행렬" << endl;
	// 2차원 배열 요소 순회하는 반복문
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// 배열의 요소가 음수이면 0으로 수정
			if (arr[i][j] < 0) arr[i][j] = 0;
			// 배열의 요소가 양수이면 255로 수정
			else arr[i][j] = 255;
			// 2차원 배열 요소 출력
			cout << arr[i][j] << "\t";
		}
		cout << endl;  // 줄바꿈
	}
	return 0;   // 프로그램 종료
}

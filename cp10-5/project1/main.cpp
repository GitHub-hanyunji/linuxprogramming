#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용

// main 함수
int main(void)
{
	// 2차원 배열 초기화
	int arr1[2][2] = {
		{2,4 },
		{5,-5}
	};
	// 2차원 배열 초기화
	int arr2[2][2] = {
		{-2,3 },
		{0,-5}
	};
	int arr3[2][2];   // 2차원 배열 arr1과 arr2의 합을 저장할 행렬
	// 연산결과 출력
	cout << "연산결과:" << endl;
	// 2차원 배열의 요소를 순회하는 반복문
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			// arr3에 배열 arr1과 arr2의 합을 저장
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			cout << arr3[i][j] << '\t';   // arr3 값 출력
		}
		cout << endl;
	}
	return 0;   // 프로그램 종료
}

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
	// 수정행렬 출력
	cout << "수정행렬" << endl;
	// 2차원 벡터 요소 순회하는 반복문
	for (int i = 0; i < (int)arr.size(); i++)
	{
		for (int j = 0; j < (int)arr.at(i).size(); j++)
		{
			// 현재 요소가 음수이면
			if (arr.at(i).at(j)<0)
			{
				// 현재 요소 값 0으로 저장
				arr.at(i).at(j)=0;
			}
			else  // 양수이면
				arr.at(i).at(j) = 255;  // 현재 요소 값 255로 저장
			// 현재 요소 출력
			cout << arr.at(i).at(j) << '\t';
		}
		cout << endl;   //줄바꿈
	}
	return 0;   // 프로그램 종료
}

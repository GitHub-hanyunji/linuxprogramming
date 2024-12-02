#include <iostream>  // 표준 입출력 라이브러리
#include<vector>     // vector 라이브러리
using namespace std; // 표준 namespace 사용
// main 함수
int main(void)
{
	// 2차원 vector 배열 v1,v2 선언
	vector<vector<int>> v1 = { {2,4},{5,-5} };
	vector<vector<int>> v2 = { {-2,3},{0,-5} };
	// 연산 결과 출력
	cout << "연산결과:" << endl;
	// 외부 벡터 크기만큼 반복
	for (int i = 0; i <(int) v1.size(); i++)
	{
		// 내부 벡터 크기만큼 반복
		for (int j = 0; j <(int) v1.at(i).size(); j++)
		{
			// v1요소와 v2 요소 더한 값 출력
			cout<<v1.at(i).at(j)+v2.at(i).at(j)<<'\t';
		}
		cout << endl;     // 줄바꿈
	}
	return 0;   // 프로그램 종료
}

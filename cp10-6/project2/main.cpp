#include <iostream>  // 표준 입출력 라이브러리
#include<vector>
using namespace std; // 표준 namespace 사용
// main 함수
int main(void)
{
	vector<int> sum = { 0,0,0 };     // 학생들 총합 저장하는 벡터
	int grade, max = sum.at(0), num = 0;  // 변수
	// 2차원 배열 요소 순회하는 반복문
	for (int i = 0; i < 3; i++)
	{
		vector<int>v;    // 학생 점수 입력받는 벡터
		// 학생 성적 입력 요청메시지 출력
		cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
		for (int j = 0; j < 3; j++)
		{
			cin >> grade;    // 과목 점수 입력받기
			v.push_back(grade);   // 입력받은 점수 벡터에 저장
			sum.at(i) += v.at(j);   // 각 과목을 성적 총합해 sum 백터에 저장
		}
		// max값보다 현재 요소 값이 더 클 때
		if (max < sum.at(i))
		{
			max = sum.at(i);  //max값 현재 요소값으로 변경
			num = i;   // 현재 위치 값 num에 저장
		}
	}
	// 최우수 학생의 위치와 평균점수 출력
	cout << "최우수 학생은 " << num + 1 << "번째 학생이고 평균 점수는" << sum.at(num) / 3 << " 점이다." << endl;
	return 0;   // 프로그램 종료
}

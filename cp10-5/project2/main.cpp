#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// main 함수
int main(void)
{
	// 2차원 배열 초기화
	int arr[3][3],grade;
	int sum[3] = { 0 },max=sum[0],num=0;     // 최대값 배열 위치 저장하는 변수
	// 2차원 배열 요소 순회하는 반복문
	for (int i = 0; i < 3; i++)
	{
		// 학생 성적 입력 요청메시지 출력
		cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
		for (int j = 0; j < 3; j++)
		{
			cin >> grade;    // 과목 점수 입력받기
			arr[i][j] = grade;   // 입력받은 점수 배열에 저장
			sum[i] += arr[i][j];   // 각 과목을 성적 총합해 sum배열에 저장
		}
		// max값보다 현재 요소 값이 더 클 때
		if (max < sum[i])
		{
			max = sum[i];  //max값 현재 요소값으로 변경
			num = i;   // 현재 위치 값 num에 저장
		}
	}
	// 최우수 학생의 위치와 평균점수 출력
	cout << "최우수 학생은 " << num+1 << "번째 학생이고 평균 점수는" << sum[num] / 3 <<"점이다."<< endl;
	return 0;   // 프로그램 종료
}

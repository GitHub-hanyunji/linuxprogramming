#include<iostream>     // 표준 입출력 라이브러리
#include<vector>
using namespace std;   // 표준 namespace 사용
// main 함수
int main(void)
{
	int n, max, min;
	vector<int>v;
	cout << "정수 4개를 입력하시오:";
	for (int i = 0; i < 4; i++)
	{
		cin >> n;
		v.push_back(n);
		if (i == 0) {
			min = max = v[0];
		}
		if (max < v[i])
			max = v[i];
		if (min > v[i])
			min = v[i];
	}
	cout << "최대값은 " << max << ", 최솟값은 " << min << "입니다" << endl;
	return 0;   // 프로그램 종료
}

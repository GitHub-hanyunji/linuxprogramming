#include<iostream>     // 표준 입출력 라이브러리
#include<vector>
#include<string>
using namespace std;   // 표준 namespace 사용
// main 함수
int main(void)
{
	string n, max;
	vector<string>v;
	vector<string>::iterator it;
	for (int i = 0; i < 5; i++)
	{
		cout << "문자열을 입력하시오:";
		cin >> n;
		v.push_back(n);
	}
	for (it = v.begin(); it<v.end(); it++)
	{
		if (it==v.begin()) {
			max = *it;
		}
		if (max < *it)
			max = *it;
	}
	cout << "사전에서 제일 뒤에 나오는 단어는 " << max << "입니다"<<endl;
	return 0;   // 프로그램 종료
}

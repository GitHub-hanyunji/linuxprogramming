#ifndef HEAD   // 만약 HEAD가 정의되지 않았다면
#define HEAD   // HEAD를 정의하여 중복 포함을 방지
#include <iostream>  // 표준 입출력 라이브러리
using namespace std; // 표준 namespace 사용
// namespace A 정의
namespace A {
	template <class T>   // 템플릿 선언
	// data 배열의 max 구하는 템플릿 함수
	T getmax(T data[], int n) {
		T max = data[0];  // max 값 data배열의 첫번째요소로 저장
		// 배열의 모든 요소 비교
		for (int i = 0; i < n; i++) 
		{
			// max값보다 data[i]가 더 크면
			if (max < data[i])
				max = data[i];  // max 값 변경
		}
		return max; // max 반환
	}
}
#endif // !HEAD

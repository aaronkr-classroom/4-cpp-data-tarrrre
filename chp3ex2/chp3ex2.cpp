// chp3_ex2
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::cin;


int main() {

	// 정수 입력받기 
	cout << "정수들을 입력해주세요: ";
	vector<int> number;

	int x;

	while (cin >> x)
		number.push_back(x);

	// 정수의 입력 유무 확인하기 
	typedef vector<int>::size_type vec_sz;
	vec_sz size = number.size();
	if (size == 0) {
		cout << endl << "정수들을 입력해야 합니다. "
			"다시 시도해주세요. " << endl;
		return 1;
	}

	// 정수 정렬하기
	sort(number.begin(), number.end());

	// 정수들의 사분위수 구하기 사분위수는 정수들을 정렬했을 때 1/4, 2/4, 3/4 자리에 오는수 
	vec_sz ft = size / 4;
	double first;
	first = size % 4 == 0 ? (number[ft] + number[ft - 1]) / 2 : number[ft];

	vec_sz se = size / 2;
	double second;
	second = size % 2 == 0 ? (number[se] + number[se - 1]) / 2 : number[se];

	vec_sz th = size / 4 * 3;
	double third;
	third = size % 2 == 0 ? (number[th] + number[th - 1]) / 2 : number[th];

	// 출력하기
	cout << first << endl;
	cout << second << endl;
	cout << third << endl;

	return 0;
}

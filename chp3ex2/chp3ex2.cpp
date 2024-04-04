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

	// ���� �Է¹ޱ� 
	cout << "�������� �Է����ּ���: ";
	vector<int> number;

	int x;

	while (cin >> x)
		number.push_back(x);

	// ������ �Է� ���� Ȯ���ϱ� 
	typedef vector<int>::size_type vec_sz;
	vec_sz size = number.size();
	if (size == 0) {
		cout << endl << "�������� �Է��ؾ� �մϴ�. "
			"�ٽ� �õ����ּ���. " << endl;
		return 1;
	}

	// ���� �����ϱ�
	sort(number.begin(), number.end());

	// �������� ������� ���ϱ� ��������� �������� �������� �� 1/4, 2/4, 3/4 �ڸ��� ���¼� 
	vec_sz ft = size / 4;
	double first;
	first = size % 4 == 0 ? (number[ft] + number[ft - 1]) / 2 : number[ft];

	vec_sz se = size / 2;
	double second;
	second = size % 2 == 0 ? (number[se] + number[se - 1]) / 2 : number[se];

	vec_sz th = size / 4 * 3;
	double third;
	third = size % 2 == 0 ? (number[th] + number[th - 1]) / 2 : number[th];

	// ����ϱ�
	cout << first << endl;
	cout << second << endl;
	cout << third << endl;

	return 0;
}

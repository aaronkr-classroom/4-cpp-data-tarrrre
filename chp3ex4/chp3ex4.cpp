// chp3ex4 �Է¿��� ���̰� ���� �� ���ڿ��� ���̿� ���̰� ���� ª�� ���ڿ��� ���̸� �˷��ִ� ���α׷��� �ۼ��غ�����.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::sort;

int main()
{
    // ���ڿ� �Է� �ޱ�
    cout << "���ڿ��� �Է��Ͻÿ�: " << endl;

    typedef vector<int>::size_type vec_sz;
    vector<vec_sz> sizes;
    string word;

    while (cin >> word)
        sizes.push_back(word.size());

    // �����ϱ� 
    sort(sizes.begin(), sizes.end());

    
    cout << "���� �� ���ڿ�: " << sizes[0] << endl;
    cout << "���� ª�� ���ڿ�: " << sizes[sizes.size() - 1] << endl;
}
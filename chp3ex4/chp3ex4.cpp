// chp3ex4 입력에서 길이가 가장 긴 문자열의 길이와 길이가 가장 짧은 문자열의 길이를 알려주는 프로그램을 작성해보세요.
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
    // 문자열 입력 받기
    cout << "문자열을 입력하시오: " << endl;

    typedef vector<int>::size_type vec_sz;
    vector<vec_sz> sizes;
    string word;

    while (cin >> word)
        sizes.push_back(word.size());

    // 정렬하기 
    sort(sizes.begin(), sizes.end());

    
    cout << "가장 긴 문자열: " << sizes[0] << endl;
    cout << "가장 짧은 문자열: " << sizes[sizes.size() - 1] << endl;
}
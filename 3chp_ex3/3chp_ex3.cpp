// chp3ex3 입력에서 각 단어가 등장한 횟수를 세는 프로그램을 작성해보세요.
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main()
{
    // 단어 입력받기 
    cout << "단어들을 입력하시오: " << endl;

    vector<string> words;
    vector<int> counts;
    typedef vector<string>::size_type vec_sz;
    string word;
    vec_sz size;



    while (cin >> word) {
        int found_index = -1;
        size = words.size();
        // 단어 찾아서 횟수 세기
        for (vec_sz i = 0; i < size; i++)
            if (words[i] == word)
                found_index = i;


        if (found_index > 0)
            ++counts[found_index];
        else {
            words.push_back(word);
            counts.push_back(1);
        }
    }





    size = words.size();
    for (vec_sz i = 0; i < size; ++i)
        cout << "단어: " << words[i] << ", 입력 횟수: " << counts[i] << endl;

    return 0;
}
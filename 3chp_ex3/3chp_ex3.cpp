// chp3ex3 �Է¿��� �� �ܾ ������ Ƚ���� ���� ���α׷��� �ۼ��غ�����.
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
    // �ܾ� �Է¹ޱ� 
    cout << "�ܾ���� �Է��Ͻÿ�: " << endl;

    vector<string> words;
    vector<int> counts;
    typedef vector<string>::size_type vec_sz;
    string word;
    vec_sz size;



    while (cin >> word) {
        int found_index = -1;
        size = words.size();
        // �ܾ� ã�Ƽ� Ƚ�� ����
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
        cout << "�ܾ�: " << words[i] << ", �Է� Ƚ��: " << counts[i] << endl;

    return 0;
}
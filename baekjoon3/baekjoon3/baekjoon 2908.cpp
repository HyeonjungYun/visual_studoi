#include<iostream>
#include<string>
using namespace std;

string ReverseString(const string src, int len)
{
    string reverse;

    for (int i = 0; i < len; i++)
        reverse += src.substr(len - i - 1, 1);

    return reverse;
}

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;  //space�� ���ڿ��� ������ �޾Ƶ��δ�.

    string copy1 = ReverseString(s1, s1.size());
    string copy2 = ReverseString(s2, s2.size());

    if (copy1 < copy2)
        cout << copy2 << endl;
    else if (copy1 > copy2)
        cout << copy1 << endl;

    return 0;
}


/*
substr(pos, count);
���ڿ��� pos��° ���� ���� count ���� ��ŭ�� ���ڿ��� �����Ѵ�.
���࿡, ���ڷ� ���޵� �κ� ���ڿ��� ���̰� ���ڿ����� ��ٸ�,
�� �̻��� ��ȯ���� �ʰ� ���ڿ��� �� ������ �����Ѵ�.

����, count�� npos�� �����Ѵٸ�, �ڵ����� pos���� ���� ���ڿ��� ������ �����Ѵ�.

����
pos : ù ��° ������ ��ġ (���� ���ڿ�����)
count : �κ� ���ڿ��� ����

���ϰ�
���� ���ڿ����� pos, pos + count ������ ���ڿ��� ��ȯ�Ѵ�.

����
���� pos�� ���� ���ڿ��� ���̺��� ��ٸ� std::out_of_range ���ܸ� �߻���Ų��.
*/


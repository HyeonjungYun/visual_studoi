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
    cin >> s1 >> s2;  //space를 문자열의 끝으로 받아들인다.

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
문자열의 pos번째 문자 부터 count 길이 만큼의 문자열을 리턴한다.
만약에, 인자로 전달된 부분 문자열의 길이가 문자열보다 길다면,
그 이상을 반환하지 않고 문자열의 끝 까지만 리턴한다.

또한, count로 npos를 전달한다면, 자동으로 pos부터 원래 문자열의 끝까지 리턴한다.

인자
pos : 첫 번째 문자의 위치 (원래 문자열에서)
count : 부분 문자열의 길이

리턴값
원래 문자열에서 pos, pos + count 까지의 문자열을 반환한다.

예외
만일 pos가 원래 문자열의 길이보다 길다면 std::out_of_range 예외를 발생시킨다.
*/


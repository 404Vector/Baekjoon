// C1.P10869.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int N;
    int* A;
    int* B;
    cin >> N ;
    A = new int[N];
    B = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        cin >> B[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] + B[i] << "\n";
    }

    return 0;
}
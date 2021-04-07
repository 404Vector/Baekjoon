// C1.P10869.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int N, X;
    int* A;
    cin >> N >> X;
    A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] < X) {
            cout << A[i] << " " ;
        }
    }
    cout << "\n";

    return 0;
}
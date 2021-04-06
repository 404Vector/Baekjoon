#include <stdio.h>

int main(void)
{
	char S[101] = { 0, };
	char A[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z', 0 };

	scanf_s("%s", S, sizeof(S));

	for (int i = 0; i < 26; i++) // 알파벳 개수만큼 반복
	{
		int C = 0;
		for (int j = 0; j < sizeof(S); j++)
		{
			// baekjoon .... b : a, b, c...
			if (A[i] == S[j])
			{
				C = j;
				break;
			}
		}
		if (A[i] == S[C])
		{
			printf("%d ", C);
		}
		else
		{
			printf("-1 ");
		}
	}
	return 0;
}
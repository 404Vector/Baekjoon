// C2.1018.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

static int GetJobCount(string lines[], int width, int height, char keys[])
{
	int job = 0;
	for (int h = 0; h < height; h++)
	{
		string line = lines[h];
		int idy = h % (sizeof(keys));
		for (int w = 0; w < width; w++)
		{
			int idx = (idy + w) % (2);
			char vkey = keys[idx];
			if (line[w] != vkey)
			{
				job += 1;
			}
		}
	}
	return job;
}

static int GetJobCount(vector<vector<char>> matrix, char keyA, char keyB, int rangeRow, int rangeCol)
{
	int job = rangeRow * rangeCol;
	char key[2] = { keyA, keyB };
	int height = matrix.size();
	int width = matrix[0].size();
	int rangeOX = width - rangeCol;
	int rangeOY = height - rangeRow;
	for (int oy = 0; oy <= rangeOY; oy++)
	{
		for (int ox = 0; ox <= rangeOX; ox++)
		{
			int jobTemp = 0;
			//printf(" # oy : %d, ox : %d\n", oy, ox);
			for (int h = oy; h < rangeRow + oy; h++)
			{
				int idy = h % (sizeof(key));
				for (int w = ox; w < rangeCol + ox; w++)
				{
					int idx = (idy + w) % (2);
					char vkey = key[idx];
					if (matrix[h][w] != vkey)
					{
						jobTemp += 1;
					}
					//printf(" - h: %d, w: %d, idy: %d, idx: %d, key: %c\n", h, w, idy, idx, vkey);
				}
			}
			//printf("  -> jt = %d\n", oy, ox, jobTemp);
			job = (job > jobTemp) ? jobTemp : job;
		}
	}
	return job;
}

int main()
{
	int width, height, job;
	vector<vector<char>> matrix;
	cin >> height >> width;
	for (int h = 0; h < height; h++)
	{
		vector<char> col;
		string line;
		cin >> line;
		for (int w = 0; w < width; w++)
		{
			col.push_back(line[w]);
		}
		matrix.push_back(col);
	}
	int job1 = GetJobCount(matrix, 'W', 'B', 8, 8);
	int job2 = GetJobCount(matrix, 'B', 'W', 8, 8);
	job = (job1 > job2) ? job2 : job1;
	printf("%d", job);
	return 0;
}
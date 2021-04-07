#include<iostream>

int main()
{
    int num;

    scanf_s("%d", &num);

    int* arr = new int[num];

    int max = -1000000;

    int min = 1000000; 

    for (int i = 0; i < num; i++)
    {
        std::cin >> arr[i];
        min = (arr[i] < min) ? arr[i] : min;
        max = (arr[i] > max) ? arr[i] : max;
    }
    std::cout << min << " " << max;
    delete arr;
    return 0;
}

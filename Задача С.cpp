#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int distance = 0;
	int cnt;
	int n;
	int an1 = 0;
	int an2 = 0;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (distance == 0)
			{
				distance = fabs(array[i] - array[j]);
				an1 = i;
				an2 = j;
			}
			if (distance > fabs(array[i] - array[j]) && j != i)
			{
				distance = fabs(array[i] - array[j]);
				an1 = i;
				an2 = j;
			}
			if (distance == fabs(array[i] - array[j]) && array[i] < array[an1] || array[j] < array[an2] && j != i)
			{
				if (array[i] < array[an1])
				{
					an1 = i;
					an2 = j;
				}
				else if (array[j] < array[an2])
				{
					an2 = j;
					an1 = i;
				}
			}
		}
	}
	if (array[an2] < array[an1])
	{
		cnt = an2;
		an2 = an1;
		an1 = cnt;
	}
	delete[] array;
	cout << distance << endl;
	cout << an1 + 1 << " " << an2 + 1;
	return 0;
}

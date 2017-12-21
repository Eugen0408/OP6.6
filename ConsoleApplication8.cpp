#include "stdafx.h"
#include "iostream"
#include "time.h"

using namespace std;

int main()
{
	const int n = 5;

	int A[n];
	float C[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 10;
		cout << " A[" << i + 1 << "] = " << A[i] << endl;
	}
	cout << endl;

	for (int i = 0; i != n; ++i)
	{
		float sum = 0;
		for (int j = i; j != n; ++j)
		{
			sum += A[j];
		}

		float average = sum / (n - i);
		C[i] = average;
	}

	for (int i = n; i != n; ++i)
		cout << C[i] << " ";

	cout << endl;
	system("pause");
	return 0;
}


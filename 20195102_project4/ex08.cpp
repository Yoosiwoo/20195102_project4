#include <iostream>
using namespace std;

template <class T>
void getSmallest(T arr[], int n)
{
	T min = 10000;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "�ּҰ�: " << min;
}
int main()
{
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	getSmallest(list, 5);
}
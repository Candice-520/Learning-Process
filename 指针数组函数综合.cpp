#include<iostream>
#include"change.h"
using namespace std;
int main()
{
	int arr[10] = { 3,4,1,0,3,5,2,9,7,8 };
	cout << "这组数分别为：" << endl;
	for (int a = 0;a < 10;a++)
		cout << arr[a] << "  ";
	cout << endl;
	cout << "下面给这组数排序：" << endl;
	for (int i = 0;i < 10 - 1;i++)
	{
		for (int j = 0;j < 10 - i - 1;j++)
		{
			if (arr[j] < arr[j + 1])
				change(&arr[j], &arr[j + 1]);
		}
	}
	cout << "排序后的数组为：" << endl;
	for (int b = 0;b < 10;b++)
		cout << arr[b] << "  ";
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
void change(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
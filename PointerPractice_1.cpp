#include <iostream>
using namespace std;
void fun(int x)
{
	x = 30;
}
int main()
{
	/*int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	
	for (int i = 0; i < 2; i++)
	{
		int temp = *(ptr + i);
		*(ptr + i) = *(ptr + 4 - i);
		*(ptr + 4 - i) = temp;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	*/
	int y = 20;
	fun(y);
	cout << y;
	return 0;
}
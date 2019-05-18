#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(long* arr);

int main() {
	long arr[5];
	long min = 0, max = 0;

	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	
	BubbleSort(arr);

	for(int i = 0; i < 4; i++)
		min = min + arr[i];

	for(int i = 1; i < 5; i++)
		max = max + arr[i];

	cout << min << ' ' << max;

	cin.get();
	cin.get();
    return 0;
}

void BubbleSort(long* arr)
{
	long hold;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++) 
		{
			if(arr[j]>arr[j+1])
			{
				hold=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=hold;
			}
		}
	}
}
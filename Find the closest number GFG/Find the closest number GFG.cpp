// Find the closest number GFG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T-- > 0)
	{
		int N, K;
		cin >> N >> K;
		
		int *arr = new int[N];
		int temp = 0;
		
		int diff = 0;
		for (int i = 0;i < N;i++)
		{
			cin >> arr[i];
			int x = K - arr[i];
			if (x < 0)
				x = -x;
			if (i == 0)
				diff = x;
			if (x < diff)
			{
				diff = x;
				temp = arr[i];
			}
			else if (x == diff)
			{
				temp = arr[i];
			}
			
		}
		cout << temp << endl;
	}
	
    return 0;
}


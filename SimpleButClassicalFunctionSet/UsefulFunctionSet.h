#pragma once
#include <string.h>
#include <stdio.h>
// The Function  is used to convert a char data to binary
void char2bin(void)
{
	char buff[100];
	printf("请输入你的学号+姓名的拼音");
	int ret = scanf("%s", buff);
	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] != '\0')
		{
			int t = buff[i];
			int arr[8];
			for (int i = 0; i < 8; i++)
				arr[i] = 0;
			int index = 7;
			int count = 0;
			while (true)
			{
				arr[index] = (t % 2);
				index--;
				t = int(t / 2);
				count++;
				if (count == 7 || t == 1)
				{
					arr[index] = t;
					break;
				}
			}
			for (int i = 0; i < 8; i++)
				printf("%d", arr[i]);
			printf(" ");
		}
	}
	printf("\n");
}
// The two algorithms as follow are serving the same function that find out the majority num
// from a num sequence if it exist in sequence.
// manner one: norm mind
int Majority(int a[], int len)
{
	int i, c, count = 1;
	c = a[0];
	for (i = 1; i < len; i++)
		if (a[i] == c)
			count++;
		else
			if (count > 0)
				count--;
			else
			{
				c = a[i];
				count = 1;
			}
	if (count > 0)
		for (i = count = 0; i < len; i++)
			if (a[i] == c)
				count++;
	if (count > len / 2)return c;
	else return -1;
}
// manner two: using the mind of counting sort
int Majority(int a[], int len, int type)
{
	if (type == 2)
	{
		int k, * p, max;
		p = new int[len];
		for (k = 0; k < len; k++)p[k] = 0;
		max = 0;
		for (k = 0; k < len; k++)
		{
			p[a[k]]++;
			if (p[a[k]] > p[max])max = a[k];
		}
		if (p[max] > len / 2)return max;
		else return -1;
	}
	else if (type == 1)
	{
		int t = Majority(a, len);
		return t;
	}
	else
	{
		cout << "Happened Call Error, Cause by algorithm edition!" << endl;
		exit(0);
	}
}
//在一个数组中，某个数字减去它右边的数得到一个数对之差
// 以下函数用于求取数组中的最大数对之差
int MaxDiff(int arr[], int length)
{
	int max, rmin, k;
	max = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
			k = i;
		}
	}
	rmin = arr[k + 1];
	for (int j = k + 2; j < length; j++)
	{
		if (rmin >= arr[j])
			rmin = arr[j];
	}
	return max - rmin;
}
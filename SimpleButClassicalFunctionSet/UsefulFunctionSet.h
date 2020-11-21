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
int Majority(int a[], int len)
{
}
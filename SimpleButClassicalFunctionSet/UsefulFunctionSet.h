#pragma once
#include <string.h>
#include <stdio.h>
void char2bin(void)
{
	char buff[100];
	printf("���������ѧ��+������ƴ��");
	int ret = scanf_s("%s", buff);
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
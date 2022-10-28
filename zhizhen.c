 #define _CRT_SECURE_NO_WARNINGS 1

//# include<stdio.h>
//
//void test(int arr[], int brr[], int x)
//{
//	int i, tmp;
//	for (i = 0; i < x; i++)
//	{
//		tmp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = tmp;
//	}
//}
//
//int main()
//{
//	int j;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int brr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr, brr, sz);
//	for (j = 0; j < sz; j++)
//	{
//		printf("%3d ", arr[j]);
//	}
//	printf("\n");
//	for (j = 0; j < sz; j++)
//	{
//		printf("%3d ", brr[j]);
//	}
//	return 0;
//}

#include<stdio.h>
void swap(int arr[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr[i];
		arr[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main()
{
	int arr[] = {6,7,8,9,0};
	int arr2[] = {1,2,3,4,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int j = 0;
	swap(arr, arr2, sz);
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr2[j]);
	}
	

	
	return 0;
}

//#include<stdio.h>
//
// void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i] = 0);
//	}
//}
//
// void print(int arr[], int sz)
// {
//	 int j = 0;
//	 for (j = 0; j < sz; j++)
//	 {
//		 printf("%d ", arr[j]);
//	 }
//	 printf("\n");
// }
//
// void reverse(int arr[], int sz)
// {
//	 int left = 0;
//	 int right = sz - 1;
//	 while (left < right)
//	 {
//		 int tmp = arr[left];
//		 arr[left] = arr[right];
//		 arr[right] = tmp;
//		 left++;
//		 right--;
//	 }
//
// }
// int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		int n = 0;
//		int flag = 1;
//		for (n = 0; n < sz - 1 - j; n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				int tmp = 0;
//				tmp = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//c(int n)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= n; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			int n = x * y;
//			printf("%d*%d=%-2d ", y, x, n);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	c(i);
//	return 0;
//}
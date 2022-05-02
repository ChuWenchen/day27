#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//    实现  strcpy 的函数

//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;               // 循环赋值
//	}
//	*arr1 = *arr2;
//}

//
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1++ = *arr2++;
//		//arr1++;
//		//arr2++;               // 循环赋值
//	}
//	*arr1 = *arr2;
//}


//void my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr2 != NULL);     //断言
//	while (*arr1++ = *arr2++)   // 既拷贝了 \0，又可以使得循环停止
//	{
//		;
//	}
//	*arr1 = *arr2;
//}
//
//int main()
//{
//	char arr1[15] = "xxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);  //  (目的地，源头)
//	printf("%s\n", arr1);   //  打印结果说明，它是连 hello\n 一起拷贝
//	return 0;
//}



int main()
{
	const int a = 10;
	//a = 20;
	//int* p = &a;
	const int* p = &a;       
	//*p = 20;
	int** pp = &p;
	*(*pp) = 20;
	printf("%d\n", a);
	return 0;
}
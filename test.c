#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//    ʵ��  strcpy �ĺ���

//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;               // ѭ����ֵ
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
//		//arr2++;               // ѭ����ֵ
//	}
//	*arr1 = *arr2;
//}


//void my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr2 != NULL);     //����
//	while (*arr1++ = *arr2++)   // �ȿ����� \0���ֿ���ʹ��ѭ��ֹͣ
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
//	//strcpy(arr1, arr2);  //  (Ŀ�ĵأ�Դͷ)
//	printf("%s\n", arr1);   //  ��ӡ���˵���������� hello\n һ�𿽱�
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
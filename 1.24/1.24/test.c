#include <stdio.h>//
//#include <ctype.h>
//int main()
//{
//	int ret1 = islower('A');
//	int ret2 = islower('a');
//	printf("%d\n", ret1);//����Сд��ĸ����0
//	printf("%d\n", ret2);//��Сд��ĸ���ط�0
//
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int ret1 = isupper('A');//�Ǵ�д��ĸ���ط�0
//	int ret2 = isupper('a');//���Ǵ�д��ĸ����0
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	int ret=toupper('a');//��Сдת��Ϊ��д
//	printf("%c", ret);
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char arr[] = "xiao tao lai lo";
//	memset(arr, 'x', 4);//��һ��������Ҫָ�����õ��ڴ���ָ��
//	                    //�ڶ���������Ҫ���õ�ֵ
//	                    //������������Ҫ���ö����ֽ���
//	printf("%s\n", arr);
//	memset(arr + 5, 'y', 3);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//    int arr[10] = { 0 };
//    memset(arr, 1, 40);//Ҫ��arr����ڴ��40���ֽ�ȫ�����ó�1������
//
//    return 0;
//}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;//��¼һ��Ŀ��ռ����ʼ��ַ����󷵻�Ҫ��
//	//����void*�����޷�ʹ��������Ҫ����ǿ������ת��Ϊchar*
//	while (num--)//ѭ��num��
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//		//ע�����ﲻ��д��(char*)dest++������ʽ����Ϊǿ������ת����ֻ����ʱ�ģ�++����void*���͵�
//		//���ǿ���++(char*)dest����д
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 40);
//	return 0;
//}
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;//��¼һ��Ŀ��ռ����ʼ��ַ����󷵻�Ҫ��
//	if (dest < src)
//	{
//		//��ǰ���󽻻�����memcpyһ��ֱ�Ӹ��ƹ����Ϳ���
//		
//		while (num--)//ѭ��num��
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr+2, arr, 20);
//	//Ҫ�� 1 2 3 4 5������ 3 4 5 6 7����ȥ��
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { 1,2,4 };
	int ret=memcmp(arr1, arr2, 12);//ǰ������һ�����������Ӧ��Ϊ0
	printf("%d", ret);
	return 0;
}
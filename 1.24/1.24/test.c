#include <stdio.h>//
//#include <ctype.h>
//int main()
//{
//	int ret1 = islower('A');
//	int ret2 = islower('a');
//	printf("%d\n", ret1);//不是小写字母返回0
//	printf("%d\n", ret2);//是小写字母返回非0
//
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int ret1 = isupper('A');//是大写字母返回非0
//	int ret2 = isupper('a');//不是大写字母返回0
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	int ret=toupper('a');//将小写转换为大写
//	printf("%c", ret);
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char arr[] = "xiao tao lai lo";
//	memset(arr, 'x', 4);//第一个参数是要指向设置的内存块的指针
//	                    //第二个参数是要设置的值
//	                    //第三个参数是要设置多少字节数
//	printf("%s\n", arr);
//	memset(arr + 5, 'y', 3);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//    int arr[10] = { 0 };
//    memset(arr, 1, 40);//要将arr这个内存块40个字节全部设置成1可以吗？
//
//    return 0;
//}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;//记录一下目标空间的起始地址，最后返回要用
//	//由于void*类型无法使用我们需要把它强制类型转换为char*
//	while (num--)//循环num次
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//		//注意这里不能写成(char*)dest++这种形式，因为强制类型转换的只是暂时的，++后还是void*类型的
//		//但是可以++(char*)dest这样写
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
//	void* ret = dest;//记录一下目标空间的起始地址，最后返回要用
//	if (dest < src)
//	{
//		//从前往后交换，跟memcpy一样直接复制过来就可以
//		
//		while (num--)//循环num次
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后完前交换
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
//	//要求将 1 2 3 4 5拷贝到 3 4 5 6 7内容去，
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { 1,2,4 };
	int ret=memcmp(arr1, arr2, 12);//前两个都一样所以最后结果应该为0
	printf("%d", ret);
	return 0;
}
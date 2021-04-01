#include<stdio.h>   //用别人的东西要打招呼,包含一下
//std-标准 standard input output
//int是整型的意思
//main前面的int表示main函数调用返回一个整型值
/*int main()        //主函数-程序的入口，有且仅有一个
{
	printf("hello world\n");   //打印函数（库函数，C语言本身提供给我们使用的函数），\n表示打印后要换行
	return 0;
}*/
/*int main()
{
	char ch = 'A';  //给内存,向内存申请1个字节
	printf("%c\n", ch);//%c---打印字符格式的数据
	int age = 20;
	printf("%d\n", age);   //%d---打印整形十进制数据
	float f = 5.0f;
	printf("%f\n", f);
	return 0;
}*/

int num = 20;//全局变量，定义在代码块{}之外的变量

int main()
{
	int num = 10;
	//局部变量和全局变量的名字建议不要相同，容易误会，产生bug
	//当局部变量和全局变量名字相同时，局部变量优先
	return 0;
}
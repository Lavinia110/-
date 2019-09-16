#define  _CRT_SECURE_NO_WARNINGS

/*************************************************
** 功能 : 学生成绩管理系统
** 作者 : 
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include"score.h"
#include<math.h>
/*----------------------------------*
		Main Function
*-----------------------------------*/

int main()
{

	printf("******************************\n");
	printf("       学生成绩管理分析系统        \n");
	printf("         系统统            \n");
	printf("******************************\n\n");

	/*-1.变量初始化-*/
	int N = 0;            //学生总数
	SS  *pstu = NULL;    //学生数组-结构体数组指针实现
	pstu = readDataFromFile(&N);//2.读取学生信息

	/*-3.计算学生总成绩（)--*/
	calcuScore(pstu, N);

	/*-4.根据学生成绩排名-*/
	sortScore(pstu, N);

	/*-5.按照排名输出学生信息-*/
	printOut(pstu, N);
	/*-6.查询学号输入成绩信息*/
	search(pstu,N);
	/*-7.均值-*/
	average(pstu, N);
	/*-8.释放动态内存空间-*/
	free(pstu);


	system("pause");
	return 0;
}

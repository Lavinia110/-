#define  _CRT_SECURE_NO_WARNINGS

/*************************************************
** ���� : ѧ���ɼ�����ϵͳ
** ���� : 
** ��Ȩ : GNU General Public License(GNU GPL)
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
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("         ϵͳͳ            \n");
	printf("******************************\n\n");

	/*-1.������ʼ��-*/
	int N = 0;            //ѧ������
	SS  *pstu = NULL;    //ѧ������-�ṹ������ָ��ʵ��
	pstu = readDataFromFile(&N);//2.��ȡѧ����Ϣ

	/*-3.����ѧ���ܳɼ���)--*/
	calcuScore(pstu, N);

	/*-4.����ѧ���ɼ�����-*/
	sortScore(pstu, N);

	/*-5.�����������ѧ����Ϣ-*/
	printOut(pstu, N);
	/*-6.��ѯѧ������ɼ���Ϣ*/
	search(pstu,N);
	/*-7.��ֵ-*/
	average(pstu, N);
	/*-8.�ͷŶ�̬�ڴ�ռ�-*/
	free(pstu);


	system("pause");
	return 0;
}

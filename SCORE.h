#pragma once
/*************************************************
* Head File   : SCORE.h
* File Usage  : ѧ������ϵͳͷ�ļ�
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__

#include<string.h>
#include <stdio.h>
#include<stdlib.h>
/*----------------------------------*
	Function Declaration
*-----------------------------------*/

typedef struct student
{
	char number[11];  //ѧ��
	char name[6];    //����
	float dailyScore;   //ƽʱ�ɼ�
	float finalScore;   //��ĩ�ɼ�
	float experiScore;//ʵ��ɼ�
	float generalScore; //�����ɼ�

}SS;
/*---------------��������-------------------*/
//1.��ȡѧ����������
void readData(SS stu[], int N);
SS* readDataFromFile(int *N);

//2.����N��ѧ�������ܳɼ�
void calcuScore(SS stu[], int N);


//3.���������ɼ�����
void sortScore(SS stu[], int N);


//4.����һ���ĸ�ʽ���N��ѧ����������Ϣ
void printOut(SS stu[], int N);
//5.��ѯѧ����ʾ�ɼ���
void search(SS stu[],int N);
//��ֵ��
void average(SS stu[], int N);

#endif
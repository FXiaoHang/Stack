#ifndef _Stack_h
#define _Stack_h

#include<iostream>
#include<cstdio>

using namespace std;

#define ElemType int
#define MaxSize 10

typedef struct {
	ElemType data[MaxSize];//��̬������ջ�е�Ԫ��
	int top;
}Sqstack;

void InitStack(Sqstack &S);//ջ�ĳ�ʼ��



#endif 


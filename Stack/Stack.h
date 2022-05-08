#ifndef _Stack_h
#define _Stack_h

#include<iostream>
#include<cstdio>

using namespace std;

#define ElemType int
#define MaxSize 10

typedef struct {
	ElemType data[MaxSize];//静态数组存放栈中的元素
	int top;
}Sqstack;

void InitStack(Sqstack &S);//栈的初始化



#endif 


#pragma once
#include<iostream>
using namespace std;

class Point {	//����Բ��

public:
	void setX(int x);	//����x

	int getX(); 	//��ȡx

	void setY(int y); 	//����y

	int getY();	//��ȡy

private:
	int m_X;
	int m_Y;
};

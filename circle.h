#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class Circle {	//����Բ�ࡣ��

public:
	void setR(int r);	//���ð뾶r

	int getR();	//��ȡ�뾶r


	void setCenter(Point center);	//����Բ��


	Point getCenter(); 	//��ȡԲ��

private:
	int m_R;	//�뾶
	Point m_Center;	//Բ��
};
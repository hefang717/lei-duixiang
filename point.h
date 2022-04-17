#pragma once
#include<iostream>
using namespace std;

class Point {	//设置圆点

public:
	void setX(int x);	//设置x

	int getX(); 	//获取x

	void setY(int y); 	//设置y

	int getY();	//获取y

private:
	int m_X;
	int m_Y;
};

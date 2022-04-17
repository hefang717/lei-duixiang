#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class Circle {	//设置圆类。。

public:
	void setR(int r);	//设置半径r

	int getR();	//获取半径r


	void setCenter(Point center);	//设置圆心


	Point getCenter(); 	//获取圆心

private:
	int m_R;	//半径
	Point m_Center;	//圆心
};
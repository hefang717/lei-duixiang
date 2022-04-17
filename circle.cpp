#include"circle.h"

//设置圆类


void Circle::setR(int r) {	//设置半径r

	m_R = r;
}
int Circle::getR() {	//获取半径r

	return m_R;
}

void Circle::setCenter(Point center) {	//设置圆心

	m_Center = center;
}

Point Circle::getCenter() {	//获取圆心

	return m_Center;
}


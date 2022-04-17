//#include<iostream>
//using namespace std;
//
//class Point {	//设置圆点
//
//public:
//	void setX(int x) {	//设置x
//
//		m_X = x;
//	}
//	int getX() {	//获取x
//
//		return m_X;
//	}
//
//	void setY(int y) {	//设置y
//
//		m_Y = y;
//	}
//	int getY() {	//获取y
//
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};
//
//class Circle {	//设置圆类
//
//public:
//	void setR(int r) {	//设置半径r
//
//		m_R = r;
//	}
//	int getR() {	//获取半径r
//
//		return m_R;
//	}
//
//	void setCenter(Point center) {	//设置圆心
//
//		m_Center = center;
//	}
//
//	Point getCenter() {	//获取圆心
//
//		return m_Center;
//	}
//
//private:
//	int m_R;	//半径
//	Point m_Center;	//圆心
//};
//
////判断点和圆心的关系
//void isInCircle(Circle& c, Point& p) {
//
//	int distance = (c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2;	//计算两点之间距离
//
//	int rDistance = c.getR() ^ 2;	//计算半径距离
//
//	if (distance == rDistance) {
//
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance) {
//
//		cout << "点在圆外" << endl;
//	}
//	else {
//
//		cout << "点在圆内" << endl;
//	}
//}
//int main() {
//
//	//创建圆
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//创建点
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	//判断关系
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}
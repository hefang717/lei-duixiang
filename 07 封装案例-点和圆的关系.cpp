//#include<iostream>
//using namespace std;
//
//class Point {	//����Բ��
//
//public:
//	void setX(int x) {	//����x
//
//		m_X = x;
//	}
//	int getX() {	//��ȡx
//
//		return m_X;
//	}
//
//	void setY(int y) {	//����y
//
//		m_Y = y;
//	}
//	int getY() {	//��ȡy
//
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};
//
//class Circle {	//����Բ��
//
//public:
//	void setR(int r) {	//���ð뾶r
//
//		m_R = r;
//	}
//	int getR() {	//��ȡ�뾶r
//
//		return m_R;
//	}
//
//	void setCenter(Point center) {	//����Բ��
//
//		m_Center = center;
//	}
//
//	Point getCenter() {	//��ȡԲ��
//
//		return m_Center;
//	}
//
//private:
//	int m_R;	//�뾶
//	Point m_Center;	//Բ��
//};
//
////�жϵ��Բ�ĵĹ�ϵ
//void isInCircle(Circle& c, Point& p) {
//
//	int distance = (c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2;	//��������֮�����
//
//	int rDistance = c.getR() ^ 2;	//����뾶����
//
//	if (distance == rDistance) {
//
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance) {
//
//		cout << "����Բ��" << endl;
//	}
//	else {
//
//		cout << "����Բ��" << endl;
//	}
//}
//int main() {
//
//	//����Բ
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	//�жϹ�ϵ
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}
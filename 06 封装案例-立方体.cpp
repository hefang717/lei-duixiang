//#include<iostream>
//using namespace std;
//
////立方体类设计
////1、创建立方类
////2、设计属性和行为
////3、获取立方体面积和体积
////4、分别利用全局函数和成员函数 判断两个立方体是否相等
//
//class Cube{
//
//public:
//	//设置长
//	void setL(int l) {
//	
//		m_L = l;
//	}
//	//获取长
//	int getL() {
//	
//		return m_L;
//	}
//
//	void setW(int w) {
//	
//		m_W = w;
//	}
//	int getW() {
//
//		return m_W;
//	}
//
//	void setH(int h) {
//	
//		m_H = h;
//	}
//	int getH() {
//	
//		return m_H;
//	}
//
//	//获取立方体面积
//	int calculateS() {
//	
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	//获取立方体体积
//	int calculateV() {
//	
//		return m_L * m_W * m_H;
//	}
//
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//
//};
//int main() {
//
//	Cube c1;
//
//	//cout << "L：" << endl;
//	//cin >> c1.m_L;	//在private下不能cin，报错！
//
//	c1.setL(10);
//	c1.setW(15);
//	c1.setH(20);
//
//	cout << "S:" << c1.calculateS() << endl;
//	cout << "V:" << c1.calculateV() << endl;
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////�����������
////1������������
////2��������Ժ���Ϊ
////3����ȡ��������������
////4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
//
//class Cube{
//
//public:
//	//���ó�
//	void setL(int l) {
//	
//		m_L = l;
//	}
//	//��ȡ��
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
//	//��ȡ���������
//	int calculateS() {
//	
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	//��ȡ���������
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
//	//cout << "L��" << endl;
//	//cin >> c1.m_L;	//��private�²���cin������
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

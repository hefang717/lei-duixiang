//#include<iostream>
//#include <math.h>
//
//using namespace std;
//
//#define PI acos(-1)
//
////设计一个圆类，求圆的周长
////圆求周长公式：2 * PI * rad
//
////class代表设计一个类，类后面紧跟着的就是类名称
//class Circle {
//
//	//访问权限
//	//公共权限
//public:
//
//	//属性
//	//半径
//	int rad;
//	//行为
//	//获取圆周长
//	double calculateZC() {
//	
//		return 2 * PI * rad;
//	}
//};
//
//int main() {
//
//	//通过圆类 创建具体的圆（对象）
//	Circle cl;
//	//给圆对象 的属性进行赋值
//	
//	cout << "请输入半径：" << endl;
//	//cl.rad = 10;
//	cin >> cl.rad;
//	cout << "圆的半径为：" << cl.rad << endl;
//
//	//2 * PI * 10 = 62.8
//	cout << "圆的周长：" << cl.calculateZC() << endl;
//
//	system("pause");
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//
////设计一个学生类，属性有姓名和学号
////可以给学号和姓名赋值，可以显示姓名和学号
//
////设计学生类
//class student {
//
//public:	//公共权限
//	//属性
//	string s_name;
//	int s_id;
//
//	//行为
//	//显示姓名学号
//	void showstudent() {
//	
//		cout << "姓名：" << s_name << '\n' << "学号：" << s_id << endl;
//	}
//
//	//给姓名赋值
//	void setname(string name) {
//	
//		s_name = name;
//	}
//
//	//给学号赋值
//	void setid(int id) {
//	
//		s_id = id;
//	}
//
//
//};
//
//int main() {
//
//	student stu;
//
//	cout << "请输入姓名：" << endl;
//	cin >> stu.s_name;
//
//	cout << "请输入学号：" << endl;
//	cin >> stu.s_id;
//
//	cout << "姓名：" << stu.s_name << endl;
//	cout << "学号：" << stu.s_id << endl;
//	
//	cout << "**************************" << endl;
//
//	student s2;
//	
//	s2.setname("德玛西亚");
//	
//	s2.setid(250);
//	s2.showstudent();
//
//	system("pause");
//	return 0;
//}
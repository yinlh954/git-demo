#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include <fstream>
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include <vector>
#include <algorithm>
#include "computerRoom.h"


class Manager : public Identity {
public:
	//默认构造
	Manager();

	//有参构造  管理员姓名，密码
	Manager(string name, string pwd);

	//选择菜单
	virtual void openMenu();

	//添加账号  
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void cleanFile();


	//机房操作
	void computerRoomTest();

	//初始化容器
	void initVector();


	//检测是否重复
	bool checkRepeat(int id, int type);

	//机房容器
	vector<ComputerRoom> vCom;
	//学生容器
	vector<Student> vStu;

	//职工容器
	vector<Teacher> vTea;
};


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
	//Ĭ�Ϲ���
	Manager();

	//�вι���  ����Ա����������
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void openMenu();

	//����˺�  
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();


	//��������
	void computerRoomTest();

	//��ʼ������
	void initVector();


	//����Ƿ��ظ�
	bool checkRepeat(int id, int type);

	//��������
	vector<ComputerRoom> vCom;
	//ѧ������
	vector<Student> vStu;

	//ְ������
	vector<Teacher> vTea;
};


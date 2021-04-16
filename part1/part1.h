#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

class Stack
{
private:
	vector<string> sName;

public:

	void addName(string name)
	{
		sName.push_back(name);
	}
	
	void delName(string name)
	{
		vector<string> temp;
		int size = sName.size();
		for (int i = size-1; i >= 0; i--)
		{
			if (sName[i] == name)
			{
				sName.erase(sName.begin() + i);
				break;
			}
			temp.push_back(sName[i]);
			sName.erase(sName.begin() + i);
		}
		int tsize = temp.size();
		for (int k = tsize-1; k >= 0; k--)
		{
			sName.push_back(temp[k]);
		}
	}

	void Print()
	{
		int size = sName.size();
		for (int i = 0; i < size; i++)
		{
			cout << sName[i] << ", ";
		}
	}

};

class Queue
{
private:
	vector<string> sName;
public:
	Queue()
	{

	}

	void addStudent(string name)
	{
		sName.push_back(name);
	}

	void delStudent(string name)
	{
		vector<string> temp;
		int size = sName.size();
		for (int i = 0; i < size; i++)
		{

		}
	}
};

class CourseNode
{
private:
	string cName;
	Stack names;
	CourseNode* next;

public:
	CourseNode()
	{
		string cName = "NULL";
		names;
		next = nullptr;
	}

	CourseNode(string course)
	{
		cName = course;
		names;
		next = nullptr;
	}

	string getCourseName()
	{
		return cName;
	}

	void UpdateNext(CourseNode* newN)
	{
		next = newN;
	}

	CourseNode* Next(CourseNode* n)
	{
		n = n->next;
		return n;
	}

	void addStudent(string name)
	{
		names.addName(name);
	}

	void delStudent(string name)
	{
		names.delName(name);
	}

	void Print()
	{
		names.Print();
	}

};

class List
{
private:
	CourseNode* head;
	CourseNode* tail;

public:
	List()
	{
		head = nullptr;
		tail = nullptr;
	}

	void Initialize()
	{
		head = nullptr;
		tail = nullptr;
	}

	void addNode(string newC)
	{
		CourseNode* temp = new CourseNode(newC);

		if (head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->UpdateNext(temp);
			tail = temp;
		}

		return;
	}

	void addStudent(string name, string course)
	{
		bool exist = false;
		CourseNode* check;
		check = head;
		while (check != nullptr)
		{
			if (check->getCourseName() == course)
			{
				exist = true;
				check->addStudent(name);
				cout << name << " has been added to the course: " << check->getCourseName() << endl;
				break;
			}
			else
			{
				check = check->Next(check);
			}
		}
		if (exist == false)
		{
			addNode(course);
			addStudent(name, course);
		}
	}

	void delStudent(string name, string course)
	{
		bool exist = false;
		CourseNode* check;
		check = head;
		while (check != nullptr)
		{
			if (check->getCourseName() == course)
			{
				exist = true;
				check->delStudent(name);
				cout << name << " has been removed from the course: " << check->getCourseName() << endl;
				break;
			}
			else
			{
				check = check->Next(check);
			}
		}
		if (exist == false)
		{
			cout << endl << "Student not in course" << endl;
		}
	}

	void Print()
	{
		bool exist = false;
		CourseNode* check;
		check = head;
		while (check != nullptr)
		{
			cout << endl << check->getCourseName() << ": ";
			check->Print();
			cout << endl;
			check = check->Next(check);
		}
		cout << endl;
	}

};
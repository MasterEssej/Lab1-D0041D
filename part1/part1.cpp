#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

#include "part1.h"

void main()
{
	List test;

	/*
	test.addNode("prog");
	test.addNode("math");
	test.addNode("data");

	test.addStudent("palle", "prog");
	test.addStudent("polle", "prog");
	test.addStudent("karl", "math");
	test.addStudent("olle", "tech");

	test.Print();
	*/
	while (true)
	{
		int choice;
		cout << "1. Application\n2. Remove\n3. Print" << endl;
		cin >> choice;

		system("cls");

		
		if (choice == 1)
		{
			cout << "Course application" << endl;
			string name;
			string course;
			cout << "Name: ";
			cin >> name;
			cout << "Course: ";
			cin >> course;
			test.addStudent(name, course);
		}
		else if (choice == 2)
		{
			cout << "Remove student" << endl;
			string name;
			string course;
			cout << "Name: ";
			cin >> name;
			cout << "Course: ";
			cin >> course;
			test.delStudent(name, course);
		}
		else if (choice == 3)
		{
			cout << "Course list" << endl;
			test.Print();
		}
		system("pause");
		system("cls");
	}
	
	return;
}
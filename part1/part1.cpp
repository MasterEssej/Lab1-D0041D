#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <chrono>
using namespace std;
using namespace std::chrono;

#include "part1.h"

int main()
{
	List test;

	while (true)
	{
		int choice;
		cout << "1. Application\n2. Remove\n3. Print" << endl;
		cin >> choice;

		system("cls");

		
		if (choice == 1)
		{
			high_resolution_clock::duration totalTime(0);
			cout << "Course application" << endl;
			string name;
			string course;
			cout << "Name: ";
			cin >> name;
			cout << "Course: ";
			cin >> course;
			auto start = high_resolution_clock::now();
			test.addStudent(name, course);
			auto end = high_resolution_clock::now();
			totalTime = totalTime + (end - start);
			auto time = totalTime.count();
			cout << endl << "Time: " << time << endl;
		}
		else if (choice == 2)
		{
			high_resolution_clock::duration totalTime(0);
			cout << "Remove student" << endl;
			string name;
			string course;
			cout << "Name: ";
			cin >> name;
			cout << "Course: ";
			cin >> course;
			auto start = high_resolution_clock::now();
			test.delStudent(name, course);
			auto end = high_resolution_clock::now();
			totalTime = totalTime + (end - start);
			auto time = totalTime.count();
			cout << endl << "Time: " << time << endl;
		}
		else if (choice == 3)
		{
			cout << "Course list" << endl;
			test.Print();
		}
		system("pause");
		system("cls");
	}
	
	return 0;
}
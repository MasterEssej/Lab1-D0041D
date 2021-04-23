#include<iostream>
#include<vector>
#include<string>
#include<chrono>
using namespace std;
using namespace std::chrono;
#include"part2.h"

int main()
{
	while (true)
	{
		system("cls");
		int choice;
		cout << "1. Stack\n2. Queue" << endl;
		cin >> choice;

		string str;
		cout << "Write string: ";
		cin.ignore();
		getline(cin, str);

		if (choice == 1)
		{
			high_resolution_clock::duration totalTime(0);
			auto start = high_resolution_clock::now();
			pStack pcheck(str); //*
			auto end = high_resolution_clock::now();
			totalTime = totalTime + (end - start);
			auto time = totalTime.count();
			cout << endl << "Time: " << time << endl;
		}
		else if (choice == 2)
		{
			high_resolution_clock::duration totalTime(0);
			auto start = high_resolution_clock::now();
			pQueue pcheck(str); //*
			auto end = high_resolution_clock::now();
			totalTime = totalTime + (end - start);
			auto time = totalTime.count();
			cout << endl << "Time: " << time << endl;
		}
		else
		{
			cout << endl << "That is not an option" << endl;
		}
		system("pause");
	}
	
	
}
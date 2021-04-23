#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class pStack
{
private:
	string word;
	vector<char> stack;
	string pal;
public:
	pStack(string s)
	{
		int size = s.size();
		for (int i = 0; i < size; i++)
		{
			if (s[i] == ' ' || s[i] == '.' || s[i] == ',')
			{
				s.erase(i,1);
				size = s.size();
				i--;
			}
			s[i] = tolower(s[i]);
		}

		for (int i = 0; i < size; i++)
		{
			stack.push_back(s[i]);
		}

		for (int i = size - 1; i >= 0; i--)
		{
			pal.push_back(stack[i]);
			stack.erase(stack.begin() + i);
		}

		cout << endl << "Word: " << s << endl;
		cout << "Backwards: " << pal << endl << endl;

		if (pal == s)
		{
			cout << s << " is a palindrome." << endl;
		}
		else
		{
			cout << s << " is not a palindrome." << endl;
		}
	}
};

class pQueue
{
private:
	string word;
	vector<char> q;
	string pal;
	bool isPal = true;
public:
	pQueue(string s)
	{
		int size = s.size();
		for (int i = 0; i < size; i++)
		{
			if (s[i] == ' ' || s[i] == '.' || s[i] == ',')
			{
				s.erase(i, 1);
				size = s.size();
				i--;
			}
			s[i] = tolower(s[i]);
		}
		
		for (int i = 0; i < size; i++)
		{
			q.push_back(s[i]);
		}

		for (int i = size-1; i >= 0; i--)
		{
			if (s[i] != q.front())
			{
				isPal = false;
				break;
			}
			q.erase(q.begin());
		}

		//cout << endl << "Word: " << s << endl;
		//cout << "Backwards: " << pal << endl << endl;
		cout << endl;

		if (isPal)
		{
			cout << s << " is a palindrome." << endl;
		}
		else
		{
			cout << s << " is not a palindrome." << endl;
		}
	}
};
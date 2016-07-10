// 151.ReverseWordsinaString.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
	void reverseWords(string &s) {
		vector<string> words = splitString(s);
		s.clear();
		while (!words.empty()) {
			s += words.back() + ' ';
			words.pop_back();
		}
		if (!s.empty()) s.pop_back();
	}

	vector<string> splitString(string& s) {
		vector<string> splited;
		string tempS = "";
		for (auto i = s.begin(); i != s.end(); i++) {
			if (*i == ' ' && !tempS.empty()) {
				splited.push_back(tempS);
				tempS = "";
			}
			else if(*i != ' ') tempS += (*i);
		}
		if(!tempS.empty()) splited.push_back(tempS);

		return splited;
	}
};

int main()
{
	Solution solu;

	string s = "test a";
	solu.reverseWords(s);
	cout << s.size() << endl;
	cout << s << endl;

    return 0;
}


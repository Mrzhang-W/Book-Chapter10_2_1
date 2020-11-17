#include<iostream>
#include<string>
#include<ctime>
#include"commonChars.h"

using namespace std;
string commonChars(const string& s1, const string& s2);

int main(int argc, char* argv[]) {
	time_t startTime = time(0);
	string s1, s2, commons;

	cout << "Please enter the first string(s1):";
	getline(cin, s1);
	cout << "Please enter the second string(s2):";
	getline(cin, s2);
	//这个是比较简单的方法
	/*for (int i = 0; i < s1.length(); i++) {
		if (s2.find(s1[i]) != string::npos) {
			commons = commons + s1[i];
		}
	}
	cout << commons << endl;*/
	commons = commonChars(s1, s2);
	cout << "The commonChars is " << commons << endl;
	time_t endTime = time(0);

	cout << "The total time is " << (endTime - startTime) << "s" << endl;
	return 1;
}
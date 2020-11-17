#include"commonChars.h"


string commonChars(const string& s1, const string& s2) {
	string str1, str2, str;
	for (int i = 0; i < s1.length(); i++) {
		if (str1.length() > 0 && str1.find(s1[i]) != string::npos) {
			continue;
		}
		if (TOTALSTR.find(s1[i]) == string::npos) {
			continue;			
		}
		str1 = str1 + s1[i];
		
	}

	for (int j = 0; j < s2.length(); j++) {
		if (str2.length() > 0 && str2.find(s2[j]) != string::npos) {
			continue;
		}
		if(TOTALSTR.find(s2[j]) == string::npos) {
			continue;
		}
		str2 = str2 + s2[j];
	}

	for (int k = 0; k < str1.length(); k++) {
		if (str2.find(str1[k]) == string::npos) {
			continue;
		}
		str = str + str1[k];
	}

	return str;
}
#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
int main() {
	std::string str1, str2;
	std::cin >> str1 >> str2;
	if (str2.length() > str1.length()) {
		printf("No %d", str2.length() - str1.length());
	}
	else {
		int disno = 0;
		std::string strtemp;
		for (int i = 0; i < str2.length(); ++i) {
			strtemp.append(1, str2[i]);
			int count= std::count(strtemp.begin(), strtemp.end(), str2[i]);
			if (count <= 1) {
				int count1 = std::count(str1.begin(), str1.end(), str2[i]);
				int count2 = std::count(str2.begin(), str2.end(), str2[i]);
				if (count2 > count1)
				{
					disno += count2 - count1;
				}
			}

		}

		if (disno > 0) {
			printf("No %d",disno);
		}
		else
		{
			printf("Yes %d", str1.length()-str2.length());
		}
	}
	system("pause");

	return 0;
}

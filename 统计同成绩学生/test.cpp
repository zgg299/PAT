#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
int main() {
	int n,k;
	std::vector<int>score;
	std::vector<int>scorefind;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		int temp;
		scanf_s("%d", &temp);
		score.push_back(temp);
	}
	scanf_s("%d", &k);
	for (int i = 0; i < k; ++i) {
		int temp;
		scanf_s("%d", &temp);
		scorefind.push_back(temp);
	}
	for (int i = 0; i < k-1; ++i) {
		int num = std::count(score.begin(), score.end(), scorefind[i]);
		printf("%d ", num);
	}
	int num = std::count(score.begin(), score.end(), scorefind[k-1]);
	printf("%d", num);
	system("pause");
	return 0;
}

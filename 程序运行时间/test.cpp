#include<iostream>
#include<cmath>
#define  CLK_TCK 100
int main(){
	double a,b;
	std::cin>>a>>b;
	double temp=round((b-a)/CLK_TCK);
	long hour=temp/3600;
	long min=(temp-3600*hour)/60;
	long sec=temp-3600*hour-60*min;
	printf("%02ld:%02ld:%02ld",hour,min,sec);
	return 0;
}
